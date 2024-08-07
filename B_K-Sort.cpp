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
  vector<int> arr(N + 1, 0);
  int min = -9999;
  bool sorted = true;
  for (int i = 1; i <= N; i++) {
    int a;
    cin >> a;
    if (a < min)
      sorted = false;

    min = max(a, min);

    arr[i] = a;
  }

  if (sorted) {
    cout << 0 << '\n';
    return;
  }
  int sum = 0;
  for (int i = 0; i < N; i++)
    if (arr[i] > arr[i + 1]) {
      const int diff = abs(arr[i] - arr[i + 1]);
      arr[i + 1] += diff;
      sum += diff;
    }

  cout << endl;
  for (auto a : arr)
    cout << a << ' ';

  cout << endl;

  cout << sum + 1 + arr[1] << '\n';
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  // array on int n size
  // allowed opration
  // 1- choose int k such 1 <= k <= n and pay  k + 1 coin
  // 2- chooose k indices such 1 <= i1 <= i2 <= ... <= ik <= n
  // 3- for each x from i to k , increase ai by 1

  int tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}