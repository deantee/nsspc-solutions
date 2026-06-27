#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string str;
  cin >> str;
  ll a{};
  ll b{};
  ll na{};
  ll nb{};
  for (char ch : str) {
    if (ch == 'A') {
      if (++na == 2) {
        na = 0;
        a = 1 - a;
      }
      b = 1 - b;
    } else {
      if (++nb == 2) {
        nb = 0;
        b = 1 - b;
      }
      a = 1 - a;
    }
  }
  cout << (!a ? "Alice\n" : "Alan\n");
  cout << (!b ? "Bob\n" : "Barbie\n");
  return 0;
}
