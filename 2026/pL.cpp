#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, m, k;
  cin >> n >> m >> k;
  vector<ll> vec(k);
  for (ll& x : vec) {
    cin >> x;
  }
  vector ans(n, vector<ll>(m));
  ll i{};
  ll j{};
  ll x{-1};
  ll y{};
  ll dx[]{1, 0, -1, 0};
  ll dy[]{0, 1, 0, -1};
  ll dir{};
  while (i < k) {
    while (x + dx[dir] < 0 || x + dx[dir] >= n || y + dy[dir] < 0 ||
           y + dy[dir] >= m || ans[x + dx[dir]][y + dy[dir]]) {
      if (++dir == 4) {
        dir = 0;
      }
    }
    x += dx[dir];
    y += dy[dir];
    ans[x][y] = i + 1;
    if (++j == vec[i]) {
      ++i;
      j = 0;
    }
  }
  for (ll i{}; i < n; ++i) {
    for (ll j{}; j < m; ++j) {
      cout << ans[i][j] << (j + 1 < m ? ' ' : '\n');
    }
  }
  return 0;
}
