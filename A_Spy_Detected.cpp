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

  int n1 = 0, n2 = 0, curr = arr[0];

  for (int i = 0; i < N; i++)
    if (arr[i] == curr)
      n1++;
    else
      n2++;

  if (n1 == 1)
    cout << 1 << endl;
  else
    for (int i = 0; i < N; i++)
      if (arr[i] != curr)
        cout << i + 1 << endl;
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