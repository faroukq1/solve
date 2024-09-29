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
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  if (n > 0) {
    cout << n;
    return 0;
  }

  const int a = abs(n % 10), b = abs(n % 100 / 10);
  if (a > b)
    cout << (n / 10);
  else {
    if (n > 0)
      cout << ((n / 100) * 10) + a;
    else
      cout << ((n / 100) * 10) - a;
  }
  return 0;
}