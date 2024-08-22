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
  int N;
  cin >> N;
  vector<int> arr(N);
  for (auto &a : arr)
    cin >> a;

  if (N == 1) {
    cout << 0 << endl;
    return;
  }
  map<int, int> store;

  for (int i = 0; i < N; i++)
    store[arr[i]]++;

  int mx = 0;
  for (auto &a : store)
    mx = max(a.second, mx);

  cout << N - mx << endl;
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