#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string str;
  getline(cin, str);
  ll ans{};
  for (char ch : str) {
    int c{tolower((unsigned char)ch)};
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      ++ans;
    }
  }
  cout << ans << '\n';
}
