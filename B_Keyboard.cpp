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

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, x, cpt = -1;
  string q;
  bool containShift = false;
  cin >> n >> m >> x >> q;

  vector<vector<char>> keys(n + 1, vector<char>(m));
  for (int i = 0; i <= n; i++)
    for (int j = 0; j < m; j++) {
      char c;
      cin >> c;
      if (c == 'S')
        containShift = true;

      keys[i][j] = c;
    }

  for (int i = 0; i < q.length(); i++) {
    if (isupper(q[i]) && !containShift)
      break;

    auto getDistnace = [&](char q1, char q2) -> int {
      int cpt = 0;
      for (int i = 0; i <= m; i++) {

        for (int j = 0; j < n; j++) {
          if (keys[i][j] == q1)
            for (int k = i; k < keys[i].size(); k++)
              if (keys[i][k] == q2)
                return cpt;
              else
                for (int k = i; k < keys[i].size(); k++)
                  if (keys[i][k] == q1)
                    return cpt;
          cpt++;
        }
      }
      return -1;
    };
    bool find = false;
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        if (keys[i][j] == q[i]) {
          find = true;
          int distance = getDistnace(q[i], q[i + 1]);
          if (distance == -1)
            cpt++;
          else if (distance / 2 > x)
            cpt++;
        }

    if (!find)
      break;
  }

  cout << cpt;

  return 0;
}