#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

void solve() {
  // the dragon has a hit point of x
  // when x <= 0 it will be defeated
  // there is two type of spell
  // 1- assume that the power of dragon == h
  // then it will become (h / 2) + 10
  // 2- or decrease the dragon's hit by 10 (h - 10)

  int X, N, M;
  cin >> X >> N >> M;
  while (N > 0 && X > (X / 2) + 10) {
    X = (X / 2) + 10;
    N--;
  }

  X -= M * 10;

  cout << (X <= 0 ? "YES" : "NO") << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}