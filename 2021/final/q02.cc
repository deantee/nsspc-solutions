#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  const double pi{3.141592};
  unordered_map<string, double> mp{
      {"American Beech", 6},       {"Basswood", 3},
      {"Common Horsechestnut", 8}, {"Dogwood", 7},
      {"European White Birch", 5}, {"White Fir", 7.5},
  };
  string str;
  cin >> str;
  if (str.empty() || str.find_first_not_of("0123456789") != string::npos) {
    cout << "You must specify a positive integer number for the number of "
            "trees!\n";
    return 0;
  }
  ll n{stoll(str)};
  if (n <= 0) {
    cout << "You must specify a positive integer number for the number of "
            "trees!\n";
    return 0;
  }
  cout << fixed << setprecision(1);
  for (ll i{}; i < n; i++) {
    double c;
    cin >> c;
    cin.ignore();
    string species;
    getline(cin, species);
    auto it = mp.find(species);
    if (it == mp.end()) {
      cout << "Species entered is not available!\n";
    } else if (c <= 0) {
      cout << "The circumference for " << species
           << " must be greater than 0!\n";
    } else {
      cout << species << " : " << c << " : " << c / pi * it->second << '\n';
    }
  }
  return 0;
}
