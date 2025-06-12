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
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll x, y, a[5], b[5];
  cin >> x >> y;
  memset(a, 0, sizeof(a));
  memset(b, 0, sizeof(b));
  for (int i = 1; i <= x; i++)
    a[i % 5]++;

  for (int i = 1; i <= y; i++)
    b[i % 5]++;

  cout << (a[0] * b[0] + a[1] * b[4] + a[2] * b[3] + a[3] * b[2] + a[4] * b[1]);
}