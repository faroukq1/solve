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
  int N, K;
  cin >> N >> K;
  vector<pair<int, int>> arr(N);
  for (auto &a : arr)
    cin >> a.first >> a.second;

  int ans;
  if (arr[0].second > K)
    ans = arr[0].first - (arr[0].second - K);
  else
    ans = arr[0].first;

  for (int i = 0; i < N; i++) {
    pair<int, int> curr = arr[i];
    int temp;
    if (curr.second > K)
      temp = curr.first - (curr.second - K);
    else
      temp = curr.first;

    ans = max(temp, ans);
  }

  cout << ans << endl;
  return 0;
}