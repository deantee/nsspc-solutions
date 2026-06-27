#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll ma, na, xa, mb, nb, xb;
  cin >> ma >> na >> xa >> mb >> nb >> xb;
  cout << (xa >= ma && xb >= nb || xa >= na && xb >= mb ? "Yes\n" : "No\n");
  return 0;
}
