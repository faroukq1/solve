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

  int n, k, sum = 0;
  cin >> n >> k;
  vector<pair<int, int>> sets(n);

  for (auto &a : sets) {
    cin >> a.first >> a.second;
    sum += a.second - a.first + 1;
  }

  if (sum % k == 0) {
    cout << 0;
    return 0;
  }

  int moves = k - (sum % k);
  cout << moves;
  return 0;
}