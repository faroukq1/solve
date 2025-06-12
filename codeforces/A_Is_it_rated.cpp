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
  int tt;
  cin >> tt;
  vector<pair<int, int>> rating(tt);

  for (auto &a : rating)
    cin >> a.first >> a.second;

  bool rated = false;

  for (int i = 0; i < tt; i++) {
    pair<int, int> rate = rating[i];
    if (rate.first != rate.second) {
      rated = true;
      break;
    }
  }

  if (rated) {
    cout << "rated";
    return 0;
  }
  vector<pair<int, int>> sorted = rating;
  sort(sorted.begin(), sorted.end(),
       [](pair<int, int> a, pair<int, int> b) -> bool {
         return a.second > b.second;
       });

  for (int i = 0; i < tt; i++)
    if (rating[i].second != sorted[i].second) {
      cout << "unrated";
      return 0;
    }

  cout << "maybe";
}