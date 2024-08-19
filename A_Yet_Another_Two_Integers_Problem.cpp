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
  int N, M;
  cin >> N >> M;
  int diff = abs(N - M), i = 9;
  int cpt = diff / 10;
  diff = diff % 10;

  while (i >= 0 && diff != 0) {
    if (diff - i >= 0) {
      cpt++;
      diff -= i;
    } else
      i--;
  }

  cout << cpt << endl;
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