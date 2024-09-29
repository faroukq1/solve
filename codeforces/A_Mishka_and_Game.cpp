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
  int tt;
  cin >> tt;
  int n1 = 0, n2 = 0;
  while (tt--) {
    int a, b;
    cin >> a >> b;
    if (a == b)
      continue;

    if (a > b)
      n1++;
    else
      n2++;
  }

  if (n1 == n2) {
    cout << "Friendship is magic!^^";
    return 0;
  }

  cout << (n1 > n2 ? "Mishka" : "Chris");

  return 0;
}