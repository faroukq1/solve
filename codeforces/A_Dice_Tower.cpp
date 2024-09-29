#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, top;
  cin >> n >> top;
  int down = 7 - top;
  bool check = true;
  int d1, d2;

  for (int i = 0; i < n; i++) {
    cin >> d1 >> d2;
    if (7 - d1 == down || 7 - d2 == down || 7 - d1 == top || 7 - d2 == top)
      check = false;
  }

  cout << (check ? "YES" : "NO");
  return 0;
}