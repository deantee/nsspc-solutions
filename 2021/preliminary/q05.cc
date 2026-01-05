#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  ll ans{};
  while (n--) {
    ll x;
    cin >> x;
    if (~x & 1) {
      ++ans;
    }
  }
  cout << ans << '\n';
}
