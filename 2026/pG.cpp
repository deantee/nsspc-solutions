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
  vector<ll> dp(n, LLONG_MAX);
  dp[0] = 0;
  for (ll i{1}; i < n; ++i) {
    if (str[i] == '#') {
      if (dp[i - 1] != LLONG_MAX) {
        dp[i] = min(dp[i], dp[i - 1] + 1);
      }
      if (i >= 2 && dp[i - 2] != LLONG_MAX) {
        dp[i] = min(dp[i], dp[i - 2] + 1);
      }
    }
  }
  cout << dp[n - 1] << '\n';
  return 0;
}
