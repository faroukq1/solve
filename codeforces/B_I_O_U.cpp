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
  // 3 group of friends A B C
  // A own B 20 rubles
  // B own C 20 rubles
  // total debit is 40 rubles
  // imagine A own C 20 rubble
  // the sum will be 20 istead of 40 (the optimal way)
  // the task is , imagine group of people has N people
  // we know the debt between the people
  // task : optimize the given debt without changing their meaning
  // print the mininum sum of debt in optimal way
  int n, m;
  cin >> n >> m;
  if (m == 0) {
    cout << 0;
    return 0;
  }

  vector<int> balance(n + 1, 0);

  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    balance[a] += c;
    balance[b] -= c;
    // dbg(balance[b], balance[a]);
  }
  int total_debt = 0;
  for (int i = 1; i <= n; i++)
    if (balance[i] > 0)
      total_debt += balance[i];

  cout << total_debt;
}

// 4 3
// 1 2 1
// 2 3 1
// 3 1 1

// 1 2 3
// 1 1 1
// 1 own 2 1rubble so it will be 0
// same for 2 and 3

// 5 3
// 1 2 10
// 2 3 1
// 2 4 1

// 1 own 2 10 rubble
// 2 own 3 1 rubble
// 2 own 4 1 rubble

//  1 2 3 4
// 10 0 0 /
// 10