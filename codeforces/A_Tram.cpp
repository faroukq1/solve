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
  int N;
  cin >> N;
  vector<pair<int, int>> arr(N + 1);

  for (int i = 1; i <= N; i++)
    cin >> arr[i].first >> arr[i].second;

  int mx = 0, curr = 0;
  for (int i = 1; i <= N; i++) {
    pair<int, int> tram = arr[i];
    curr = (curr - tram.first) + tram.second;
    mx = max(mx, curr);
  }

  cout << mx << endl;
  return 0;
}