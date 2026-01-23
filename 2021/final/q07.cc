#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, m, k;
  cin >> n >> m >> k;
  vector grid(n, vector<uint8_t>(m));
  while (k--) {
    ll x, y;
    cin >> x >> y;
    grid[x][y] = 1;
  }
  array<ll, 9> dd{-1, -1, 0, 1, 1, -1, 1, 0, -1};
  for (ll i{}; i < n; ++i) {
    for (ll j{}; j < m; ++j) {
      if (grid[i][j]) {
        cout << '*';
        continue;
      }
      ll cnt{};
      for (ll k{}; k < 8; ++k) {
        ll ni{i + dd[k]};
        ll nj{j + dd[k + 1]};
        if (ni < 0 || ni >= n) {
          continue;
        }
        if (nj < 0 || nj >= m) {
          continue;
        }
        if (grid[ni][nj]) {
          ++cnt;
        }
      }
      cout << cnt;
    }
    cout << '\n';
  }
}
