#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  ll sum{};
  for (ll i{1}; i <= n; ++i) {
    if (n % i == 0) {
      sum += i;
    }
  }
  cout << sum << '\n';
}
