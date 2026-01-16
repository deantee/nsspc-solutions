#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll m, n, p, q;
  cin >> m >> n >> p >> q;
  ll t{m * n};
  ll ans{t};
  while (t >= p) {
    ll u{t / p * q};
    t %= p;
    t += u;
    ans += u;
  }
  cout << ans << '\n';
}
