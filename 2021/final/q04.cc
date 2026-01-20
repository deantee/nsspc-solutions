#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string str, crime;
  cin >> str >> crime;
  vector<string> sus(4);
  for (auto& s : sus) {
    cin >> s;
  }
  ll idx{};
  for (ll i{}; i < 4; ++i) {
    if (sus[i] == crime) {
      idx = i + 1;
      break;
    }
  }
  if (idx == 0) {
    cout << "0\n";
    cout << "0\n";
    return 0;
  }
  cout << idx << '\n';
  ll n(crime.size()), m(str.size());
  ll ans{}, cur{};
  for (ll i{}; i + m <= n;) {
    if (crime.compare(i, m, str) == 0) {
      ++cur;
      ans = max(ans, cur);
      i += m;
    } else {
      cur = 0;
      ++i;
    }
  }
  cout << ans << '\n';
}
