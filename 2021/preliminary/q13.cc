#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  array<ll, 7> arr;
  for (ll& x : arr) {
    cin >> x;
  }
  sort(arr.begin(), arr.end());
  ll sum{};
  for (ll i{2}; i < 5; ++i) {
    sum += arr[i];
  }
  cout << fixed << setprecision(2) << sum / 3.0 << '\n';
}
