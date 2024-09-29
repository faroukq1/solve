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
  int n, t, k, d;
  cin >> n >> t >> k >> d;
  // time without oven
  int bathesWithoutOven = (n + k - 1) / k;
  int timeWithoutOven = bathesWithoutOven * t;

  int batchesFirstOven = d / t;
  int cakesBakedFirstOven = batchesFirstOven * k;

  if (cakesBakedFirstOven >= n) {
    cout << "NO";
    return 0;
  }
  int remainingCakes = n - cakesBakedFirstOven;
  int batchesWithTwoOvens = (remainingCakes + 2 * k - 1) / (2 * k);
  int timeWithSecondOven = d + batchesWithTwoOvens * t;

  cout << (timeWithSecondOven < timeWithoutOven ? "YES" : "NO");

  return 0;
}