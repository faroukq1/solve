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
  string s;
  cin >> s;
  int a = 0, b = 0, c = 0;
  for (int i = 0; i < s.length(); i++)
    if (s[i] == 'A')
      a++;
    else if (s[i] == 'B')
      b++;
    else
      c++;

  if (c == 0 && a == b)
    cout << "YES";
  else if (c != 0 && (a == (b - c)))
    cout << "YES";
  else
    cout << "NO";

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