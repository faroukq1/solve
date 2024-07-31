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
  map<string, int> teams;
  while (tt--) {
    string team;
    cin >> team;
    if (teams.find(team) != teams.end())
      teams[team]++;
    else
      teams.insert({team, 1});
  }

  string win;
  int maxStore = -88;

  for (auto team : teams)
    if (team.second > maxStore) {
      win = team.first;
      maxStore = team.second;
    }

  cout << win << endl;
  return 0;
}