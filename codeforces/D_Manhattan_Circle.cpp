#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

void solve() {
  int n, m;
  cin >> n >> m;

  vector<vector<char>> grid(n, vector<char>(m));

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> grid[i][j];

  int maxLine = 0, maxHash = 0;

  for (int i = 0; i < n; i++) {
    int cpt = 0;
    for (int j = 0; j < m; j++)
      if (grid[i][j] == '#')
        cpt++;

    if (cpt > maxHash) {
      maxLine = i;
      maxHash = cpt;
    }
  }
  // dbg(maxLine, maxHash);

  if (maxHash == 1) {
    for (int i = 0; i < m; i++)
      if (grid[maxLine][i] == '#')
        cout << maxLine + 1 << ' ' << i + 1 << endl;
    return;
  } else {
    int cptDot = 0;
    for (int i = 0; i < m; i++)
      if (grid[maxLine][i] == '#')
        break;
      else if (grid[maxLine][i] == '.')
        cptDot++;

    if (cptDot > 0)
      cout << maxLine + 1 << ' ' << (maxHash / 2) + 1 + cptDot << endl;
    else
      cout << maxLine + 1 << ' ' << (maxHash / 2) + 1 << endl;
  }
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}