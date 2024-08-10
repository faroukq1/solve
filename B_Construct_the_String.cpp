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
  int n, a, b;
  cin >> n >> a >> b;
  char temp = 'a';
  string distinc = "";
  for (int i = 0; i < b; i++)
    distinc.push_back(temp++);

  string temp2 = "";
  for (int i = 0; i < a; i++)
    temp2 += distinc[i % distinc.size()];

  for (int i = 0; i < n; i++)
    cout << temp2[i % temp2.size()];

  cout << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  // giving n , a, b
  // you have to construct string on length n
  // lower case latin
  // each substring of length a has exactly b distinct letter
  int tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}