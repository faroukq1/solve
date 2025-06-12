#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool is_valid_timur(const string &s) {
  if (s.length() != 5) {
    return false;
  }

  string timur = "Timur";
  sort(timur.begin(), timur.end());

  string sorted_s = s;
  sort(sorted_s.begin(), sorted_s.end());

  return sorted_s == timur;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (is_valid_timur(s)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
