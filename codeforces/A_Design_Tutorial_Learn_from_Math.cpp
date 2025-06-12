#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

bool compose(int a) {
  if (a <= 3)
    return false;

  for (int i = 2; i * i <= a; i++)
    if (a % i == 0)
      return true;

  return false;
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int N;
  cin >> N;

  for (int i = 4; i < N; i++) {
    int y = N - i;

    if (compose(i) && compose(y)) {
      cout << i << ' ' << y << endl;
      break;
    }
  }
  return 0;
}