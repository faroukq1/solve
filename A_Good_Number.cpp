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
  int n, k, cpt = 0;
  cin >> n >> k;
  auto isGood = [&](string a) -> bool {
    if (a.length() < k + 1)
      return false;

    for (int i = 0; i <= k; i++) {
      bool find = false;
      for (int j = 0; j < a.length(); j++) {
        const int item = a[j] - '0';
        if (item == i)
          find = true;
      }
      if (!find)
        return false;
    }
    return true;
  };
  while (n--) {
    string a;
    cin >> a;
    if (isGood(a))
      cpt++;
  }

  cout << cpt;
  return 0;
}