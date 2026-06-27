#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct Q {
  ll a, b;
  Q(ll a = 0, ll b = 1) : a{a}, b{b} { norm(); }
  Q& norm() {
    ll g{gcd(a, b)};
    a /= g;
    b /= g;
    if (a < 0) {
      a = -a;
      b = -b;
    }
    return *this;
  }
  Q& operator*=(const Q& q) {
    a *= q.a;
    b *= q.b;
    return norm();
  }
  Q operator*(const Q& q) {
    Q cpy{*this};
    cpy *= q;
    return cpy;
  }
  Q& operator/=(const Q& q) {
    a *= q.b;
    b *= q.a;
    return norm();
  }
  Q operator/(const Q& q) const {
    Q cpy{*this};
    cpy /= q;
    return cpy;
  }
  bool operator!=(const Q& q) const { return a != q.a && b != q.b; }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll v, vs, n;
  cin >> v >> vs >> n;
  vector<Q> vec(n);
  for (ll i{}; i < n; ++i) {
    ll u, f;
    cin >> u >> f;
    vec[i] = Q(vs + v) / (vs + u) * f;
  }
  for (ll i{1}; i < n; ++i) {
    if (vec[i] != vec[i - 1]) {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  cout << vec[0].a << ' ' << vec[0].b << '\n';
  return 0;
}
