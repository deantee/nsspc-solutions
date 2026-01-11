#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  if (~n & 1) {
    --n;
  }
  vector<uint8_t> prime(n + 1, true);
  for (ll i{3}; i <= n; i += 2) {
    if (prime[i]) {
      for (ll j{i * i}; j <= n; j += i * 2) {
        prime[j] = false;
      }
    }
  }
  for (ll i{n}; i >= 3; i -= 2) {
    if (prime[i]) {
      cout << i << '\n';
      return 0;
    }
  }
  cout << "2\n";
}
