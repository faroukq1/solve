#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool is_progressive_square_possible(int n, int c, int d, vector<int> &b) {
  sort(b.begin(), b.end());

  unordered_set<int> diffs;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      diffs.insert(i * c + j * d);
    }
  }

  vector<int> b_diffs(b.size() - 1);
  for (int i = 1; i < b.size(); ++i) {
    b_diffs[i - 1] = b[i] - b[i - 1];
  }

  sort(b_diffs.begin(), b_diffs.end());

  for (int i = 0; i < b_diffs.size(); ++i) {
    if (diffs.find(b_diffs[i]) == diffs.end()) {
      return false;
    }
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n, c, d;
    cin >> n >> c >> d;

    vector<int> b(n * n);
    for (int i = 0; i < n * n; ++i) {
      cin >> b[i];
    }

    if (is_progressive_square_possible(n, c, d, b)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }

  return 0;
}
