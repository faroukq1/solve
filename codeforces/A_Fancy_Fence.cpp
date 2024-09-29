#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;
using ll = long long;

void solve() {
  ll n, interiorAngles = 0, i = 3;
  long double angle = 0;
  cin >> n;
  while (angle < n) {
    interiorAngles = 180 * (i - 2);
    angle = static_cast<long double>(interiorAngles) / i;
    if (angle == n) {
      cout << "YES\n";
      return;
    }
    i++;
  }
  cout << "NO\n";
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--)
    solve();
}