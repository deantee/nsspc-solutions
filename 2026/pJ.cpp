#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, q;
  cin >> n >> q;
  vector vec(11, vector<ll>(10));
  while (n--) {
    ll p, d;
    cin >> p >> d;
    ++vec[p][d];
  }
  while (q--) {
    ll a;
    cin >> a;
    ll ans{};
    for (ll i{1}; i <= 10; ++i) {
      for (ll j{}; j <= 9; ++j) {
        if (!((a - j) % i)) {
          ans += vec[i][j];
        }
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
