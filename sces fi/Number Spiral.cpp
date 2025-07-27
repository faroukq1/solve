#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
long long x, y;
    cin >> y >> x;

    long long maxi = max(x,y);
    long long square = (maxi - 1) * (maxi - 1);
    if (maxi % 2 == 0) {
      if (x > y)
        cout << square + y << endl;
      else
        cout << (maxi * maxi) - x + 1 << endl;
    }
    else {
      if (x > y)
        cout << (maxi * maxi) - y + 1 << endl;
      else
        cout << square + x << endl;
    }
  }


int main () {
  int test;
  cin >> test;
  while (test--)
    solve();
}