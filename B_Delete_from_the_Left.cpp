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
  string a, b;
  cin >> a >> b;
  if (a.back() != b.back()) {
    cout << a.length() + b.length() << endl;
    return 0;
  }
  int cpt = 0, i = a.length() - 1, j = b.length() - 1;

  while (i >= 0 || j >= 0) {
    if (a[i] != b[j])
      break;
    cpt++;
    j--;
    i--;
  }

  cout << (a.length() + b.length()) - 2 * cpt << endl;
  return 0;
}