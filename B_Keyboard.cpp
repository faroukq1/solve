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

bool can[26];
int n, m, k, q, res = 0;
char key[31][31];
char text[1000000];
vector<pair<int, int>> posKey[26], shift;

int dist(int i, int j, int shr, int shc) {
  return (i - shr) * (i - shr) + (j - shc) * (j - shc);
}

bool check(int i, int j) {
  for (int w = 0; w < shift.size(); w++) {
    int dis = dist(i, j, shift[w].first, shift[w].second);
    if (dis <= k * k)
      return true;
  }
  return false;
}

int main()

{
  scanf("%d%d%d", &n, &m, &k);
  for (int i = 0; i < n; i++) // keyboard keys
    scanf("%s", key[i]);

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) {
      if (key[i][j] == 'S')
        shift.push_back(make_pair(i, j)); // position of each key
      else
        posKey[key[i][j] - 'a'].push_back(make_pair(i, j));
    }

  for (int i = 0; i < 26; i++)
    for (int j = 0; j < posKey[i].size() && !can[i];
         j++) { // check of each key if can press on it with one hand
      can[i] = can[i] | check(posKey[i][j].first, posKey[i][j].second);
    }

  scanf("%d%s", &q, text);
  for (int i = 0; i < q; i++) {
    if (islower(text[i])) {
      if (posKey[text[i] - 'a'].empty()) {
        res = -1;
        break;
      }
    } else {
      text[i] = tolower(text[i]);

      if (shift.empty() || posKey[text[i] - 'a'].empty()) {
        res = -1;
        break;
      }

      if (!can[text[i] - 'a'])
        ++res;
    }
  }
  printf("%d", res);

  return 0;
}