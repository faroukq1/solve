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
  int N;
  cin >> N;
  vector<int> ans;
  int cpt = 0;
  while (N != 0) {
    int temp = N % 10;
    if (temp != 0)
      ans.push_back(temp * pow(10, cpt));

    cpt++;
    N = N / 10;
  }

  cout << ans.size() << endl;
  for (auto a : ans)
    cout << a << ' ';

  cout << endl;
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