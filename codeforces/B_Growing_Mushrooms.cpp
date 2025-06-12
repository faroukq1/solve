#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, t1, t2;
  double k;
  cin >> n >> t1 >> t2 >> k;
  k = 1 - (k / 100);
  vector<pair<int, int>> speeds(n);
  for (auto &a : speeds)
    cin >> a.first >> a.second;

  vector<pair<int, double>> ans;

  for (int i = 0; i < n; i++) {
    int s1 = speeds[i].first, s2 = speeds[i].second;

    double height1 = s1 * t1 * k + s2 * t2;
    double height2 = s2 * t1 * k + s1 * t2;
    ans.push_back({i + 1, max(height1, height2)});
  }

  sort(ans.begin(), ans.end(), [](pair<int, double> a, pair<int, double> b) {
    if (a.second == b.second) {
      return a.first < b.first;
    }
    return a.second > b.second;
  });

  for (auto a : ans) {
    cout << a.first << ' ' << fixed << setprecision(2) << a.second << '\n';
  }

  return 0;
}
