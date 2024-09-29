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
  vector<int> arr(N * 2);
  for (auto &a : arr)
    cin >> a;

  sort(arr.begin(), arr.end());
  // 1 5 10 15
  vector<pair<int, int>> ans;

  for (int i = 0; i < N; i++)
    ans.push_back({arr[i], arr[i + N]});
  int sum = 0;

  for (int i = 0; i < ans.size() - 1; i++) {
    sum += abs(ans[i + 1].first - ans[i].first);
    sum += abs(ans[i + 1].second - ans[i].second);
  }

  cout << sum << endl;
  for (auto &a : ans)
    cout << a.first << ' ' << a.second << endl;
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