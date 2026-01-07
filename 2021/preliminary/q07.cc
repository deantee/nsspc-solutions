#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  double p, r, t;
  cin >> p >> r >> t;
  ll n{};
  while (p < t) {
    p *= 1 + r;
    ++n;
  }
  cout << n << '\n';
}
