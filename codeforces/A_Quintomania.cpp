#include <iostream>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <numeric>
#include <random>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
#include <limits>
#include <string>
#include <limits.h>

using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
  int N;
  cin >> N;
  vector<int> arr(N);

  for (auto &a : arr)
    cin >> a;


  bool perfect = true;

  for (int i = 0 ; i < N - 1 ; i++) {
    const int diff = abs(arr[i] - arr[i + 1]);
    if (diff != 7 && diff != 5) {
      perfect = false;
      break;
    }
  }

  cout << (perfect ? "YES" : "NO") << endl;
}
int main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}