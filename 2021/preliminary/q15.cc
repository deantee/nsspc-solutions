#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  char ch;
  cin >> n >> ch;
  for (ll i{}; i < n; ++i) {
    cout << string(n - i - 1, ' ') << string(i * 2 + 1, ch) << '\n';
  }
  for (ll i{}; i < n; ++i) {
    cout << string(n - 1, ' ') << ch << '\n';
  }
}
