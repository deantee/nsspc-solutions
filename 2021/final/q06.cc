#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct Id {
  string id;
  ll y, m, d;
  bool male;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string buf;
  getline(cin, buf);
  stringstream ss(buf);
  vector<Id> ids;
  ll yn{2021};
  while (getline(ss, buf, ';')) {
    ll y{stoll(buf.substr(0, 2)) + 1900};
    if (yn - y > 80) {
      y += 100;
    }
    ids.emplace_back(buf, y, stoll(buf.substr(2, 2)), stoll(buf.substr(4, 2)),
                     buf.back() % 2 != 0);
  }
  array<string, 3> vec;
  for (auto& s : vec) {
    getline(cin, s);
  }
  auto cmp_y = [](const Id& a, const Id& b) -> bool { return a.y < b.y; };
  auto cmp_m = [](const Id& a, const Id& b) -> bool { return a.m < b.m; };
  auto cmp_d = [](const Id& a, const Id& b) -> bool { return a.d < b.d; };
  auto cmp_date = [](const Id& a, const Id& b) -> bool {
    return a.y != b.y ? a.y < b.y : a.m != b.m ? a.m < b.m : a.d < b.d;
  };
  auto cmp_male = [](const Id& a, const Id& b) -> bool {
    return a.male && !b.male;
  };
  auto cmp_female = [](const Id& a, const Id& b) -> bool {
    return !a.male && b.male;
  };
  unordered_map<string, function<bool(const Id&, const Id&)>> mp{
      {{"Birthdate", cmp_date},
       {"Birth Year", cmp_y},
       {"Birth Month", cmp_m},
       {"Birth Day", cmp_d},
       {"Gender with Male first", cmp_male},
       {"Gender with Female first", cmp_female}}};
  for (ll i{3}; i-- > 0;) {
    auto cmp = mp[vec[i]];
    stable_sort(ids.begin(), ids.end(),
                [&cmp](const Id& a, const Id& b) -> bool { return cmp(a, b); });
  }
  static const array<string, 12> months{
      "January", "February", "March",     "April",   "May",      "June",
      "July",    "August",   "September", "October", "November", "December"};
  for (Id& id : ids) {
    cout << id.id << ' ' << setfill('0') << setw(2) << id.d << ' '
         << months[id.m - 1] << ' ' << id.y << ' '
         << (id.male ? "Male" : "Female") << '\n';
  }
}
