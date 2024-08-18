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
  string N, temp = "";
  cin >> N;
  vector<string> ans;
  int cpt = 0;
  for (int i = 0; i < N.length(); i++) {
    if (N[i] != '0')
      cpt++;
    if (cpt > 1) {
      ans.push_back(temp);
      temp = "";
      cpt = 0;
    }
    temp.push_back(N[i]);
  }

  ans.push_back(temp);

  for (auto a : ans)
    cout << a << endl;
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