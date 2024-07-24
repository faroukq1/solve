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
  int N, K;
  cin >> N >> K;
  vector<int64_t> arr(K);

  for (auto &a : arr)
    cin >> a;

  sort(arr.begin(), arr.end());

  int64_t ops = 0;
  for (int i = 0; i < K - 1; i++)
    ops += 2 * arr[i] - 1;

  cout << ops << "\n";
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