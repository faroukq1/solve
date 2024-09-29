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
  // n pair of socks
  // before go to school vasia has to put on socks
  // in the evening takes off the socks and throws them away
  // every m-th day mom buy new pair of socks
  int n, m;
  cin >> n >> m;
  // 1 2 (bought new socks -1-) 3
  // 1 2 3 (bought) 4 5 6 (bought) 7 8 9 (bought) total 12
  // remember 12 is 3*k (k == 4) so mom boughth new sock
  // 1 2 3 (bought) 4 5 6 (bought) 7 8 9 (bought) (bought)
  int days = 0, socks = n;
  while (socks > 0) {
    days++;
    socks--;
    if (days % m == 0)
      socks++;
  }

  cout << days << endl;
}

// 10 + (10 / 2) ==> 15
// 10 + (5 / 2) ==> 17
// 10 + (2 / 2) ==> 18
// 18 % 2 == 0 18++ ==> 19

// 9 + 3 ==> 12