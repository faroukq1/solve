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
  vector<int> arr(3);
  for (auto &a : arr)
    cin >> a;

  auto valid = [&](vector<int> arr) -> bool {
    if (arr[0] + arr[1] == arr[2])
      return true;
    if (arr[2] + arr[1] == arr[0])
      return true;
    if (arr[0] + arr[2] == arr[1])
      return true;
    return false;
  };
  cout << (valid(arr) ? "YES" : "NO") << endl;
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