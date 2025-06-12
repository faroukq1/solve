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
  auto goodYear = [&](int year) -> bool {
    set<int> seen;
    while (year != 0) {
      int x = year % 10;
      bool find = seen.find(x) != seen.end();
      //   dbg(x);
      if (find)
        return false;
      else
        seen.insert(x);

      year = year / 10;
    }

    return true;
  };

  int currentYear = N + 1;
  while (true) {
    if (goodYear(currentYear)) {
      cout << currentYear;
      break;
    }
    currentYear++;
  }
  return 0;
}