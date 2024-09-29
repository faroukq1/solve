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
  vector<char> A(N);
  vector<int> B(N);

  for (auto &a : A)
    cin >> a;

  for (auto &b : B)
    cin >> b;

  int max = *max_element(B.begin(), B.end());
  vector<vector<int>> directions(N);
  for (int i = 0; i < N; i++) {
    const int dir = A[i];
    const int pos = B[i];
    if (dir == 'R') {
      for (int j = pos; j <= max; j++) {
        directions[i].push_back(j);
      }
    } else {
      for (int j = pos; j >= 0; j--) {
        directions[i].push_back(j);
      }
    }
  }

  int counter = 0;
  for (int i = 0; i < N; i++) {
    vector<int> x = directions[i];
    for (int j = 0; j < N; j++) {
      if (i == j)
        continue;

      vector<int> y = directions[j];

      for (int k = 0; k < x.size(); k++)
        for (int q = 0; q < y.size(); q++)
          if (x[k] == y[q] && k == q) {
            cout << k;
            return 0;
          }
    }
  }

  cout << -1;
}