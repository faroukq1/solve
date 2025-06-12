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
  if (N > 45) {
    cout << -1 << endl;
    return;
  }

  vector<int> digits;

  for (int i = 9; i >= 1; i--)
    if (N >= i) {
      digits.push_back(i);
      N -= i;
    }

  if (N > 0)
    cout << -1 << endl;
  else {
    reverse(digits.begin(), digits.end());
    for (auto a : digits)
      cout << a;
    cout << endl;
  }
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