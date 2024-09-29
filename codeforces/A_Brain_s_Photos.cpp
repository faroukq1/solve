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

  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
      cin >> grid[i][j];

  auto valid = [&](char c) -> bool { return c == 'C' || c == 'M' || c == 'Y'; };
  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++) {
      if (valid(grid[i][j])) {
        cout << "#Color";
        return 0;
      }
    }

  cout << "#Black&White";
  return 0;
}