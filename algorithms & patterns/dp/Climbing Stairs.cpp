#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int climbStairs (int N) {
    vector<int> dp(N + 1);
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= N; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    return dp[N];
}

map <int, int> store;
int rec_climb_staris (int N) {
    if (N == 1)
        return 1;
    if (N == 2)
        return 2;
    
    if (store.find(N) != store.end())
        return store[N];
    
    store[N] = rec_climb_staris(N - 1) + rec_climb_staris(N - 2);
    return store[N];
}
void run_case() {
    int N;
    cin >> N;
    const int ans = rec_climb_staris(N);
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests = 1;
    // cin >> tests;

    while (tests-- > 0) run_case();
}