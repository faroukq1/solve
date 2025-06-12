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
  int n;
  cin >> n;
  if (n == 1)
    cout << "I hate it";
  else if (n > 1)
    cout << "I hate that";
  for (int i = 2; i < n; i++) {

    if (i % 2 == 1 && i != n)
      cout << " I hate that";

    else if (i % 2 == 0 && i != n)
      cout << " I love that";
  }
  if (n % 2 == 0 && n > 1)
    cout << " I love it";
  else if (n > 1)
    cout << " I hate it";
  cout << endl;
  return 0;
}