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
  cin >> N;

  vector<int> birds(N + 1);

  for (int i = 1; i <= N; i++)
    cin >> birds[i];

  //   for (auto &a : birds)
  //     cout << a << ' ';
  int M;
  cin >> M;
  while (M--) {
    int xi, yi;
    cin >> xi >> yi;

    int wire = birds[xi];

    if (xi >= 1)
      birds[xi - 1] += yi - 1;
    if (xi < N)
      birds[xi + 1] += wire - yi;

    birds[xi] = 0;
  }
  for (int i = 1; i <= N; i++)
    cout << birds[i] << '\n';
}