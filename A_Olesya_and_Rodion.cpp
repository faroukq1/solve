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

int main() {
  ll n, t;
  cin >> n >> t;

  if (t == 10) {
    if (n == 1) {
      cout << -1;
      return 0;
    } else {
      cout << 1;
      for (int i = 1; i < n; i++)
        cout << 0;

      return 0;
    }
  } else {
    for (int i = 0; i < n; i++)
      cout << t % 10;
    return 0;
  }
}