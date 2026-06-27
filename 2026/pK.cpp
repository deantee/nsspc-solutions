#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, m;
  cin >> n >> m;
  vector<pair<ll, ll>> pairs(m);
  for (auto& [u, v] : pairs) {
    cin >> u >> v;
  }
  vector<ll> vec(n + 1);
  while (n--) {
    ll c, t;
    cin >> c >> t;
    vec[c] = t;
  }
  ll ans{};
  for (auto& [u, v] : pairs) {
    ans = max(ans, min(vec[u], vec[v]));
  }
  cout << ans - 1 << '\n';
  return 0;
}
