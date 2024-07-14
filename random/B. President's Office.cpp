#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

// Utility functions for comparison
template <typename S, typename T> void smax(S &a, const T &b) {
  if (a < b)
    a = b;
}
template <typename S, typename T> void smin(S &a, const T &b) {
  if (a > b)
    a = b;
}

// Random number generator setup
#define rng_init                                                               \
  mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_seed(x) mt19937 rng(x)
#define rng(x) rng(x)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
const int MXN = 1e5 + 5, INF = 1e9 + 5;

int dirx[] = {-1, 0, 1, 0};
int diry[] = {0, 1, 0, -1};
void solve() {
  int n, m;
  char col;
  cin >> n >> m >> col;

  auto valid = [&](int x, int y) -> bool {
    return x > -1 && x < n && y > -1 && y < m;
  };
  set<char> seen;
  vector<vector<char>> room(n, vector<char>(m));

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> room[i][j];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) {
      if (room[i][j] == col) {
        for (int k = 0; k < 4; k++) {
          int tox = i + dirx[k];
          int toy = j + diry[k];
          bool possible =
              valid(tox, toy) && room[tox][toy] != col && room[tox][toy] != '.';
          if (possible)
            seen.insert(room[tox][toy]);
        }
      }
    }
  cout << seen.size();
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int TC = 1;
  // cin >> TC;
  while (TC--)
    solve();

  return 0;
}