#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, h, m;
  cin >> n >> h >> m;
  int min_time = 24 * 60;

  while (n--) {
    int a, b;
    cin >> a >> b;

    int time_sleep;
    if (a > h || (a == h && b >= m)) {
      time_sleep = (a - h) * 60 + (b - m);
    } else {
      time_sleep = (a - h + 24) * 60 + (b - m);
    }

    if (time_sleep < min_time) {
      min_time = time_sleep;
    }
  }

  cout << min_time / 60 << ' ' << min_time % 60 << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--)
    solve();
}