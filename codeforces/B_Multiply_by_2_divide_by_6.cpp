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
  long long N, cpt = 0;
  cin >> N;
  // you can mult n by 2 or div by 6 (if N % 6 == 0)
  if (N == 1) {
    cout << 0 << endl;
    return;
  }
  while (N != 1) {
    if (N % 6 == 0) {
      N = N / 6;
      cpt++;
    } else {
      N = N * 2;
      cpt++;
    }

    if (N > 1e9)
      break;
  }

  if (N != 1) {
    cout << -1 << endl;
    return;
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