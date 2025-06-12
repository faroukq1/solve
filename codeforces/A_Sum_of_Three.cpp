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
  vector<int> store;

  for (int i = 1; i < N; i++)
    if (i % 3 != 0)
      store.push_back(i);

  for (int i = 1; i < store.size(); i++)
    for (int j = 1; j < store.size(); j++)
      for (int k = 1; k < store.size(); k++)
        if (store[i] == store[j] || store[i] == store[k] ||
            store[j] == store[k])
          break;
        else if (store[i] + store[j] + store[k] == N) {
          cout << "YES" << endl;
          cout << store[i] << ' ' << store[j] << ' ' << store[k] << endl;
          return;
        }

  cout << "NO" << endl;
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