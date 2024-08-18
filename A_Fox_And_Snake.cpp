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
  int N, M;
  cin >> N >> M;

  vector<vector<char>> grid(N, vector<char>(M));
  for (int i = 0; i < N; i += 2)
    for (int j = 0; j < M; j++)
      grid[i][j] = '#';

  bool left = true;

  for (int i = 1; i < N; i += 2) {
    for (int j = 0; j < M; j++)
      grid[i][j] = '.';

    if (left)
      grid[i][M - 1] = '#';
    else
      grid[i][0] = '#';

    left = !left;
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++)
      cout << grid[i][j];

    cout << endl;
  }

  return 0;
}