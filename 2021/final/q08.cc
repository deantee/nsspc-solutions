#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  vector<double> vec(n);
  for (auto& x : vec) {
    string str;
    cin >> str;
    try {
      x = stod(str);
    } catch (exception e) {
      x = numeric_limits<double>::quiet_NaN();
    }
  }
  vector<ll> left(n, -1), right(n, -1);
  for (ll i{1}; i < n; ++i) {
    left[i] = isnan(vec[i]) ? left[i - 1] : i;
    right[n - i - 1] = isnan(vec[n - i - 1]) ? right[n - i] : n - i - 1;
  }
  cout << fixed << setprecision(2);
  for (ll i{}; i < n; ++i) {
    if (isnan(vec[i])) {
      cout << (vec[right[i]] - vec[left[i]]) / (right[i] - left[i]) *
                      (i - left[i]) +
                  vec[left[i]]
           << '\n';
    }
  }
}
