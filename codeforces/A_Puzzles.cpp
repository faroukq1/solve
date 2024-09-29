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
  // 1- there is n student
  // 2- give each of them puzzle
  // 3- threre is m puzzle in the shop
  int n, m;
  cin >> n >> m;
  vector<int> arr(m);
  for (auto &a : arr) {
    cin >> a;
  }
  sort(arr.begin(), arr.end());
  int ans = MXN;
  for (int i = 0; i <= m - n; i++) {
    int temp = abs(arr[i + n - 1] - arr[i]);
    if (temp < ans)
      ans = temp;
  }

  cout << ans;
  return 0;
}