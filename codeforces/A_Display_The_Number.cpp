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
  long long N, ans = 0;
  cin >> N;
  vector<int> freq = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  while (N >= 0) {
    int minIndex = MXN;
    for (int i = 0; i < freq.size(); i++)
      if (N > freq[i])
        minIndex = min(minIndex, i);

    ans = ans * 10 + minIndex;
    N = N - minIndex;

    minIndex = MXN;

    if (N >= 0)
      break;
  }

  cout << ans << endl;
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