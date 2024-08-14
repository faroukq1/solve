#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

int main() {
  int t;
  long long int n, ans, div;
  cin >> t;
  while (t--) {
    cin >> n;
    ans = n, div = 0;
    if (n < 10) {
      cout << n << "\n";
      continue;
    }

    else {
      while (n >= 10) {
        div = n / 10;
        n = n % 10;
        n = n + div;
        ans += div;
      }
      cout << ans << "\n";
    }
  }
  return 0;
}