#include <iostream>
#include <vector>
using namespace std;

void solve() {
  int N;
  cin >> N;
  vector<int> arr(N);
  for (auto &a : arr)
    cin >> a;

  long long surplus = 0;
  bool possible = true;

  for (int i = 0; i < N; i++) {
    surplus += arr[i] - i;
    if (surplus < 0) {
      possible = false;
      break;
    }
  }

  cout << (possible ? "YES" : "NO") << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}
