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
  string a;
  cin >> a;
  for (int i = 0; i < a.length(); i++)
    if (a[i] > '4')
      a[i] = '9' - a[i] + '0';

  if (a[0] == '0')
    a[0] = '9';

  cout << a;
  return 0;
}