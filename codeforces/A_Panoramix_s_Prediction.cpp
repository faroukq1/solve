#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

bool primeNum(int num) {
  for (int i = 2; i < num; i++)
    if (num % i == 0)
      return false;
  return true;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  if (!primeNum(m)) {
    cout << "NO";
    return 0;
  }

  for (int i = n + 1; i < m; i++)
    if (primeNum(i)) {
      cout << "NO";
      return 0;
    }

  cout << "YES";
  return 0;
}