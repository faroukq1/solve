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
  // list of company's incomes
  // list == n
  // the total income of the company is the sum of all n
  // roma want to make k changes on several number of sequence
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (auto &a : arr)
    cin >> a;

  int sum = 0, mini = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (arr[i] < 0 && k > 0)
      arr[i] *= -1, k--;
    sum = sum + arr[i];
    mini = min(mini, arr[i]);
  }

  if (k % 2 == 1)
    sum = sum - (2 * mini);

  cout << sum;
}