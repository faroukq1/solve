#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;
bool canBeAP(int a, int b, int c) {
  if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0)
    return true;
  if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)
    return true;
  if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0)
    return true;

  if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)
    return true;

  return false;
}

void solve() {
  int a, b, c, m = 1;
  cin >> a >> b >> c;
  // 10 5 30 we should make 5 to 20 to make like this
  // 10 20 30 this is an AP
  if (canBeAP(a, b, c))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  // 3 pos int a , b , c
  // choose positive int m and mult by a or b or c by m
  int tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}