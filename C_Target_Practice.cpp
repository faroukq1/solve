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

using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


const int N = 10;
void solve () {
    vector<string> grid(N);
    for (auto &g : grid)
        cin >> g;

    int ans = 0;
    for (int i = 0 ; i < N ; i++) {
        for (int j = 0 ; j < N ; j++) {
            
        }
    }

    cout << ans << endl;
}
int main() {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}