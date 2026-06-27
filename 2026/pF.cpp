#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  vector<ll> vec(n);
  for (ll& x : vec) {
    cin >> x;
  }
  sort(vec.rbegin(), vec.rend());
  ll i{};
  while (i < n && vec[i] >= i + 1) {
    ++i;
  }
  cout << i << '\n';
  return 0;
}
