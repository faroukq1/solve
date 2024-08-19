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
  int N, ans;
  cin >> N;
  if (N >= 1900)
    ans = 1;
  else if (N < 1900 && N >= 1600)
    ans = 2;
  else if (N < 1600 && N >= 1400)
    ans = 3;
  else
    ans = 4;
  cout << "Division " << ans << endl;
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