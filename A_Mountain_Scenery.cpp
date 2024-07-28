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
  int n, k;
  cin >> n >> k;
  const int size = n * 2 + 1;
  vector<int> peaks(size);
  for (auto &a : peaks)
    cin >> a;
  auto valid = [&](vector<int> &a, int i) -> bool {
    return a[i] > a[i - 1] + 1 && a[i] > a[i + 1] + 1;
  };
  for (int i = 1; i < size; i++)
    if (valid(peaks, i)) {
      peaks[i]--;
      k--;
      if (k == 0)
        break;
    }

  for (auto &a : peaks)
    cout << a << ' ';

  return 0;
}
