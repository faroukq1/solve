#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

bool coPrime(long long a, long long b) { return gcd(a, b) == 1; }

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  long long a, b;
  cin >> a >> b;
  if (a % 2 != 0) {
    a++;
  }

  if (abs(a - b) < 2) {
    cout << -1;
    return 0;
  } else {
    cout << a << ' ' << a + 1 << ' ' << a + 2;
  }

  return 0;
}