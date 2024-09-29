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
  int n;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] != '.') {
      if (s[i] == 'R') {
        while (s[i] == 'R') {
          i++;
        }
        cout << i << ' ' << i + 1 << endl;
      } else {
        cout << i + 1 << ' ' << i << endl;
      }
      break;
    }
  }
  return 0;
}