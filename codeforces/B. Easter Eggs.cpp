#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

// Utility functions for comparison
template <typename S, typename T> void smax(S &a, const T &b) {
  if (a < b)
    a = b;
}
template <typename S, typename T> void smin(S &a, const T &b) {
  if (a > b)
    a = b;
}

// Random number generator setup
#define rng_init                                                               \
  mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_seed(x) mt19937 rng(x)
#define rng(x) rng(x)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
const int MXN = 1e5 + 5, INF = 1e9 + 5;

string colors = "ROYGBIV", col1 = "G", col2 = "GB", col3 = "GBI", col4 = "GBIV";
void solve() {
  int N;
  cin >> N;
  int size = N - 7;
  if (size == 1) {
    colors += col1;
  } else if (size == 2) {
    colors += col2;
  } else if (size == 3) {
    colors += col3;
  } else {
    while (size) {
      if (size >= 4) {
        colors += col4;
        size -= 4;
      } else if (size == 3) {
        colors += col3;
        size -= 3;
      } else if (size == 2) {
        colors += col2;
        size -= 2;
      } else {
        colors += col1;
        size -= 1;
      }
    }
  }
  cout << colors << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int TC = 1;
  // cin >> TC;
  while (TC--)
    solve();

  return 0;
}