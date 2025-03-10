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
  int N, P;
  cin >> N >> P;
  int min = P, max = P, amazing = 0;
  while (N--) {
    cin >> P;
    if (P < min) {
      min = P;
      amazing++;
    }

    if (P > max) {
      max = P;
      amazing++;
    }
  }

  cout << amazing << endl;
  return 0;
}