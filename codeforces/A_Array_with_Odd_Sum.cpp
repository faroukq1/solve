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

  int firstSum = accumulate(arr.begin(), arr.end(), 0);
  if (firstSum % 2 != 0) {
    cout << "YES" << endl;
    return;
  }

  int odd = 0, even = 0;
  for (int i = 0; i < N; i++)
    if (arr[i] % 2 == 0)
      even++;
    else
      odd++;

  if (odd == 0)
    cout << "NO";
  else if (even == 0)
    cout << "NO";
  else
    cout << "YES";

  cout << endl;
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