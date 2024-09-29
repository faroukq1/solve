#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
  int n;
  cin >> n;
  ll sum = 0;
  int ct = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 1)
      ct++;
    sum += x;
  }

  cout << (sum >= ct + n && n > 1 ? "YES" : "NO") << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
