#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;
using ll = long long;

void solve() {
  ll n;
  cin >> n;
  if ((n & (n - 1)) == 0)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}