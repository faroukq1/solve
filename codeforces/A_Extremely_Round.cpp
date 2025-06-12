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


void run_case () {
    int N , ans = 0;
    cin >> N;
    vector<int> extreme_round;
    for (int i = 1 ; i <= 9 ; i++) {
        int num = i;
        
        while (num < 1e6) {
            extreme_round.push_back(num);
            num *= 10;
        }
    }

    sort(extreme_round.begin(), extreme_round.end());
    for (auto x : extreme_round)
        if (x <= N)
            ans++;
        else
            break;

    cout << ans << endl;
}
int main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
        run_case();
    return 0;
}