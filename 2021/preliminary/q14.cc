#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll x, y;
  cin >> x >> y;
  if (y % 2 != 0 || x * 4 < y || x * 2 > y) {
    cout << "No feasible solution\n";
    return 0;
  }
  ll a{(x * 4 - y) / 2};
  cout << a << '\n';
  cout << x - a << '\n';
}
