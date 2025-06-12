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
  string a;
  cin >> a;

  if (a.length() <= 2) {
    cout << "NO" << endl;
    return;
  }
  if (a[0] != '1' || a[1] != '0') {
    cout << "NO" << endl;
    return;
  }

  string ans = a.substr(2, a.length());
  if (ans[0] == '0')
    cout << "NO";
  else if (ans.length() == 1 && ans[0] == '1')
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