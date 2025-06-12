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
  vector<int> arr(4);

  for (auto &a : arr)
    cin >> a;

  vector<int> sorted = arr;
  sort(sorted.rbegin(), sorted.rend());

  int n1 = max(arr[0], arr[1]) + max(arr[2], arr[3]);
  int n2 = sorted[0] + sorted[1];

  cout << (n1 == n2 ? "YES" : "NO") << endl;
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