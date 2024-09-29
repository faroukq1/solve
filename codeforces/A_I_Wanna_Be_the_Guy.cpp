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
  int N, P;
  cin >> N >> P;
  set<int> store;
  for (int i = 0; i < P; i++) {
    int a;
    cin >> a;
    store.insert(a);
  }
  int Q;
  cin >> Q;
  for (int i = 0; i < Q; i++) {
    int a;
    cin >> a;
    store.insert(a);
  }
  for (int i = 1; i <= N; i++) {
    bool find = store.find(i) != store.end();
    if (!find) {
      cout << "Oh, my keyboard!";
      return 0;
    }
  }

  cout << "I become the guy.";
}