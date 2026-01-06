#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll x, y;
  cin >> x >> y;
  if (x > y) {
    swap(x, y);
  }
  cout << (x + y) * (y - x + 1) / 2 << '\n';
}
