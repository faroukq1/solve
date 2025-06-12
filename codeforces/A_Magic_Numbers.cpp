#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;
using ll = long long;
int main() {
  ll i, j, k;
  string s;
  bool flag = true;

  cin >> s;
  for (i = 0; i < s.length();) {
    if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
      i += 3;
    else if (s[i] == '1' && s[i + 1] == '4')
      i += 2;
    else if (s[i] == '1')
      i++;
    else {
      flag = false;
      break;
    }
  }

  cout << (flag ? "YES" : "NO");
}