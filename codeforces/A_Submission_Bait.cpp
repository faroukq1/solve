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

  sort(arr.begin(), arr.end(), greater<int>());

  int tmp = 1, ok = 1;

  for (int i = 0; i < N - 1; i++) {
    if (arr[i] == arr[i + 1]) {
      tmp++;
    } else {
      if (tmp % 2 == 1) {
        ok = 0;
        break;
      } else {
        tmp = 1;
      }
    }
  }
  if (tmp % 2 == 1 && ok) {
    cout << "YES" << endl;
    return;
  }
  cout << (ok ? "NO" : "YES") << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  // array on n size
  // there is variable mx = 0
  // choose in index i such i <= i <= n
  // mx set to ai (mx = arr[i])
  // then set ai = 0 (arr[i] = 0)
  int tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}