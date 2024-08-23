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
  long long N, F, A, B;
  cin >> N >> F >> A >> B;
  vector<long long> messages(N + 1, 0);

  for (long long i = 1; i <= N; i++)
    cin >> messages[i];

  for (long long i = 0; i < N; i++) {
    long long diff = messages[i + 1] - messages[i];
    if (diff * A < B)
      F -= A * diff;
    else
      F -= B;

    if (F <= 0) {
      cout << "NO" << endl;
      return;
    }
  }

  cout << (F >= 0 ? "YES" : "NO") << endl;
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