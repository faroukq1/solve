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
ll calculate_max_steps(ll n, ll m, ll xc, ll yc, ll dx, ll dy) {
  ll steps_x = LLONG_MAX, steps_y = LLONG_MAX;
  if (dx > 0) {
    steps_x = (n - xc) / dx;
  } else if (dx < 0) {
    steps_x = (1 - xc) / dx;
  }

  if (dy > 0) {
    steps_y = (m - yc) / dy;
  } else if (dy < 0) {
    steps_y = (1 - yc) / dy;
  }

  return min(steps_x, steps_y);
}

int main() {
  ll n, m, xc, yc;
  int k;
  cin >> n >> m >> xc >> yc >> k;

  ll total_steps = 0;
  for (int i = 0; i < k; ++i) {
    ll dx, dy;
    cin >> dx >> dy;

    ll max_steps = calculate_max_steps(n, m, xc, yc, dx, dy);
    total_steps += max_steps;

    xc += max_steps * dx;
    yc += max_steps * dy;
  }

  cout << total_steps << endl;
  return 0;
}