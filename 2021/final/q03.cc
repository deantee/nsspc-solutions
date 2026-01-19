#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string str;
  getline(cin, str);
  ll n(str.size());
  ll pos{};
  set<string> st;
  while (pos < n) {
    ll nxt(str.find(' ', pos));
    if (nxt == ll(string::npos)) {
      nxt = n;
    }
    string s{str.substr(pos, nxt - pos)};
    string t;
    for (char ch : s) {
      int c{toupper(ch)};
      if (isalpha(c)) {
        t.push_back(c);
      }
    }
    st.insert(t);
    pos = nxt + 1;
  }
  cout << st.size() << '\n';
  for (auto& s : st) {
    cout << s << '\n';
  }
}
