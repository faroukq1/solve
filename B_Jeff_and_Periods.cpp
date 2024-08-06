#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main() {
  ios_base::sync_with_stdio(0), cin.tie(0);
  vector<int> a[100001];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[x].push_back(i);
  }

  vector<pair<int, int>> ans;
  for (int i = 0; i < 100001; i++) {
    if (a[i].size() == 0)
      continue;
    else if (a[i].size() == 1)
      ans.push_back({i, 0});
    else {
      int d = a[i][1] - a[i][0];
      bool flag = true;
      for (int j = 1; j < a[i].size(); j++) {
        if (a[i][j] - a[i][j - 1] != d) {
          flag = false;
          break;
        }
      }
      if (flag) {
        ans.push_back({i, d});
      }
    }
  }
  cout << ans.size() << "\n";
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i].first << " " << ans[i].second << "\n";
  }
  return 0;
}