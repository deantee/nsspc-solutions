#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll a, n;
  cin >> a >> n;
  while (n--) {
    a *= 5;
    a += 7;
  }
  cout << a << '\n';
}
