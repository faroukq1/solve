#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int INF = 1e9 + 5;
const int AKA = 5e5 + 5;
double arr[AKA];

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i)
    cin >> arr[i];
  sort(arr, arr + n);
  double r1 = arr[n - 1];
  int m;
  cin >> m;
  for (int i = 0; i < m; ++i)
    cin >> arr[i];
  sort(arr, arr + m);
  double p1 = arr[m - 1];
  int k;
  cin >> k;
  for (int i = 0; i < k; ++i)
    cin >> arr[i];
  sort(arr, arr + k);
  double p2 = arr[0];
  double A, B;
  cin >> A >> B;
  double ans = ((double)B * p1 * r1 * r1) / ((double)A * p2 + B * p1);
  cout << fixed << setprecision(12) << sqrt(ans);
}