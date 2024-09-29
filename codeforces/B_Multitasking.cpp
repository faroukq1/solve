#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

void print_swaps(vector<pair<int, int>> &swaps) {
  cout << swaps.size() << endl;
  for (auto &swap : swaps) {
    cout << swap.first + 1 << " " << swap.second + 1 << endl;
  }
}

void sort_arrays(vector<vector<int>> &arrays, int k) {
  int n = arrays.size();
  int m = arrays[0].size();
  vector<pair<int, int>> swaps;

  for (int i = 0; i < m; ++i) {
    for (int j = i + 1; j < m; ++j) {
      bool need_swap = false;
      for (int a = 0; a < n; ++a) {
        if ((k == 0 && arrays[a][i] > arrays[a][j]) ||
            (k == 1 && arrays[a][i] < arrays[a][j])) {
          need_swap = true;
          break;
        }
      }
      if (need_swap) {
        swaps.push_back({i, j});
        for (int a = 0; a < n; ++a) {
          if ((k == 0 && arrays[a][i] > arrays[a][j]) ||
              (k == 1 && arrays[a][i] < arrays[a][j])) {
            swap(arrays[a][i], arrays[a][j]);
          }
        }
      }
    }
  }
  print_swaps(swaps);
}

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  vector<vector<int>> arrays(n, vector<int>(m));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cin >> arrays[i][j];
    }
  }

  sort_arrays(arrays, k);

  return 0;
}
// 1 3 2 5 4 and 1 4 3 2 5
// 1 2 3 5 4 and 1 2 3 4 5
// 2 and 3 sp || 4 and 2 sp
// 1 2 3 4 5 and 1 2 3 4 5
// 4 and 5 sp

// 1 3 2 5 4 -> swap the indce 2 with 3 (2 : 3)
// 1 2 3 5 4 -> swap the inde 4 with 5 (4 : 5)
// 1 4 3 2 5 -> swap the indce 4 with the next min indice
// we have min(3 , 2) = 3 so we swap 4 with 3 (4 : 3)

// then we remove the deplicated element

// print ans size
// res : (2 : 3) , (2 : 5) , (4 : 5)

// decreasing order
// 1 2 we swap 1 by 2 so indice 1 and 2 (2 : 1)
// 2 3 the same thing (2 : 1)
// 4 5 the same thing (4 : 5)