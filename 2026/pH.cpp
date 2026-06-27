#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  string str;
  cin >> str;
  if (n == 1) {
    if (str == "?") {
      cout << "L\n";
    } else {
      cout << str << '\n';
    }
    return 0;
  }
  string t{"LGF"};
  if (str[0] == '?') {
    for (char ch : t) {
      if (ch == str[1] || ch == str[n - 1]) {
        continue;
      }
      str[0] = ch;
      cout << ch;
      break;
    }
  } else {
    cout << str[0];
  }
  for (ll i{1}; i < n - 1; ++i) {
    if (str[i] == '?') {
      for (char ch : t) {
        if (ch == str[i - 1] || ch == str[i + 1]) {
          continue;
        }
        str[i] = ch;
        cout << ch;
        break;
      }
    } else {
      cout << str[i];
    }
  }
  if (n >= 2) {
    if (str[n - 1] == '?') {
      for (char ch : t) {
        if (ch == str[n - 2] || ch == str[0]) {
          continue;
        }
        cout << ch;
        break;
      }
    } else {
      cout << str[n - 1];
    }
  }
  cout << '\n';
  return 0;
}
