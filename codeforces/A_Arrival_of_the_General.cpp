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
  int N;
  pair<int, int> mx = {-1, -1}, mn = {MXN, MXN};
  cin >> N;
  vector<int> arr(N);
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    arr[i] = a;
    if (a >= mx.first)
      mx = {a, i};
    if (a <= mn.first)
      mn = {a, i};
  }
  int mostLeft = (N - 1) - mx.second;
  int mostRight = mn.second - 1;

  if (N % 2 == 0)
    cout << mostLeft + mostRight << endl;
  else
    cout << mostLeft + mostRight - 1 << endl;

  return 0;
}