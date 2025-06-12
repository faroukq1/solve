#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

vector<vector<pair<int, int>>> sides = {{
                                            {0, 0},
                                            {0, 1},
                                            {1, 0},
                                            {1, 1},
                                        },
                                        {
                                            {0, 2},
                                            {0, 3},
                                            {1, 2},
                                            {1, 3},
                                        },
                                        {
                                            {2, 0},
                                            {2, 1},
                                            {3, 0},
                                            {3, 1},
                                        },
                                        {
                                            {2, 2},
                                            {2, 3},
                                            {3, 2},
                                            {3, 3},
                                        },
                                        {
                                            {1, 0},
                                            {1, 1},
                                            {2, 0},
                                            {2, 1},
                                        },
                                        {
                                            {1, 2},
                                            {1, 3},
                                            {2, 2},
                                            {2, 3},
                                        },
                                        {
                                            {1, 1},
                                            {1, 2},
                                            {2, 1},
                                            {2, 2},
                                        }};
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  char grid[4][4];
  for (int i = 0; i < 4; i++)
    for (int j = 0; j < 4; j++)
      cin >> grid[i][j];

  auto valid = [&](vector<pair<int, int>> side) -> bool {
    int cpt1 = 0, cpt2 = 0;
    for (auto &a : side) {

      const int row = a.first, col = a.second;
      if (grid[row][col] == '#')
        cpt1++;
      if (grid[row][col] == '.')
        cpt2++;
    }
    // dbg(cpt1, cpt2);
    return cpt1 >= 3 || cpt2 >= 3;
  };

  for (int i = 0; i < sides.size(); i++)
    if (valid(sides[i])) {
      cout << "YES";
      return 0;
    }

  cout << "NO";
}