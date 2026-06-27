#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n, k;
  cin >> n >> k;
  ll empty{n};
  ll ans{n};
  while (empty >= k) {
    ll t{empty / k};
    ans += t;
    empty = empty % k + t;
  }
  cout << ans << '\n';
  return 0;
}
