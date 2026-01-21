#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  array<ll, 8> idx{};
  iota(idx.begin(), idx.end(), 0LL);
  string ans{"abcdefgha"};
  while (n--) {
    string str;
    cin >> str;
    ll a{idx[str[0] - 'a']};
    ll b{idx[str[1] - 'a']};
    if (a > b) {
      swap(a, b);
    }
    while (a < b) {
      swap(idx[ans[a] - 'a'], idx[ans[b] - 'a']);
      swap(ans[a], ans[b]);
      ++a;
      --b;
    }
  }
  cout << ans << '\n';
}
