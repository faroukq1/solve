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
  int k, l, m, n;
  cin >> k >> l >> m >> n;
  int tot;
  cin >> tot;

  set<int> ans;
  auto possible = [&](int i) -> bool {
    return i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0;
  };
  for (int i = 1; i <= tot; i++)
    if (possible(i))
      ans.insert(i);

  cout << ans.size() << endl;
  return 0;
}