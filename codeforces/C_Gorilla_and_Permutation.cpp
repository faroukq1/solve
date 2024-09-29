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
  int n, m, k;
  cin >> n >> m >> k;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  // there is 3 number n m k
  // construct permutation of length n
  //
  int tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}