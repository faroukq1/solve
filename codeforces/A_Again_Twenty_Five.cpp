#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

using ll = long long;
ll powerMod(ll base, ll exp, ll mod) {
  ll res = 1;
  while (exp > 0) {
    if (exp % 2 == 1)
      res = (res * base) % mod;
    base = (base * base) % mod;
    exp /= 2;
  }

  return res;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll N;
  cin >> N;

  ll ans = powerMod(5, N, 100);
  cout << ans << endl;
  return 0;
}