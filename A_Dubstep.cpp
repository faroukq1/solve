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
  string s;
  cin >> s;
  vector<string> ans;
  int i = 0;
  bool once = true;
  while (i < s.length()) {
    bool find = s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B';
    if (find) {
      if (once)
        cout << ' ';
      i = i + 3;
      once = false;
    } else {
      once = true;
      cout << s[i++];
    }
  }
}