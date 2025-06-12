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
  vector<int> odd, even;

  while (N--) {
    int a;
    cin >> a;
    if (a % 2 == 0)
      even.push_back(a);
    else
      odd.push_back(a);
  }

  int n1 = accumulate(even.begin(), even.end(), 0);
  int n2 = accumulate(odd.begin(), odd.end(), 0);

  cout << (n1 > n2 ? "YES" : "NO") << endl;
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