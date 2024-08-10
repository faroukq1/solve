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
  long long N;
  cin >> N;
  // 3 : 1 * 1 + 2 * 1 = 3 (k == 2)
  // 6 : 1 * 2 + 2 * 2 = 6 (k == 6)
  long long x = 1;
  long long cpt = 0;
  for (long long k = 3; k < 100; k++) {
    while (k >= 1) {
      cpt += (k * x);
      cout << cpt << ' ';
      if (cpt == N)
        break;
    }
  }
  cout << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  // there is n candy wrappers
  // he bought x candies during the first day
  // 2x the second ... pow(2 , k - 1) candies during the k-th day
  // x > 0 && k > 1
  int tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}