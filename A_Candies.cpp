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
  long long k = 2, x = 1, sum = 0;
  while (sum < N) {
    for (int i = 1; i <= k; i++)
      sum = x * pow(2, i);

    x++;
    k++;
  }
  cout << x;
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