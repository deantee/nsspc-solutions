#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  double r, h;
  cin >> r >> h;
  cout << fixed << setprecision(2) << 2 * 3.14 * r * (h + r) << '\n';
}
