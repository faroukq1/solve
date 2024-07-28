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
  int N;
  cin >> N;
  vector<int> neighbor(N);
  for (auto &a : neighbor)
    cin >> a;

  if (N <= 1) {
    cout << "YES";
    return 0;
  } else if (N == 2 && neighbor[0] != neighbor[1]) {
    cout << "YES";
    return 0;
  }

  map<int, int> store;

  for (auto &a : neighbor) {
    auto find = store.find(a) != store.end();
    if (find)
      store[a]++;
    else
      store.insert({a, 1});
  }
  int maxE = -99;
  for (auto &a : store) {
    maxE = max(maxE, a.second);
  }

  cout << (maxE <= (N + 1) / 2 ? "YES" : "NO");
}