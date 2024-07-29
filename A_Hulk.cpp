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
  if (N == 1) {
    cout << "I hate it ";
    return 0;
  } else if (N == 2) {
    cout << "I hate that I love it";
    return 0;
  } else if (N == 3) {
    cout << "I hate that I love that I hate it";
    return 0;
  } else {
    for (int i = 1; i <= N; i++) {
      if (i == N && N % 2 == 0) {
        cout << "I love that";
      } else if (i == N && N % 2 != 0) {
        cout << "I hate that";
      }

      if (i % 2 == 0)
        cout << "I love it" << ' ';
      else
        cout << "I hate it" << ' ';
    }
  }
}