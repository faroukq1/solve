#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;
void solve() {
  long long n, k;
  string s;

  cin >> n >> k >> s;

  map<char, int> store;
  for (auto &a : s)
    store[a]++;

  int odd = 0;

  for (auto item : store)
    if (item.second & 1)
      odd++;

  cout << (odd <= k + 1 ? "YES" : "NO") << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt;
  cin >> tt;

  while (tt--)
    solve();

  return 0;
}
