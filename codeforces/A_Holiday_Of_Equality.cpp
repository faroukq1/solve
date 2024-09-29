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
  vector<int> arr(N);
  for (auto &a : arr)
    cin >> a;

  sort(arr.begin(), arr.end());

  int mx = arr.back(), cpt = 0;
  for (int i = 0; i < N - 1; i++)
    cpt = cpt + (abs(arr[i] - mx));

  cout << cpt << endl;
  return 0;
}