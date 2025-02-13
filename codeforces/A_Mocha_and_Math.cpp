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

void second_solution () {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (auto &a : arr)
        cin >> a;

    int ans = arr.front();

    for (int i = 1; i < N; i++)
        ans = ans & arr[i];

    // simple solution to understand
    cout << ans << endl;
}

void run_case() {
    int N;
    cin >> N;
    int ans;
    cin >> ans;
    N--;
    while (N--) {
        int a;
        cin >> a;
        ans = ans & a;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests;
    cin >> tests;

    while (tests-- > 0) {
        run_case();
        // second_solution();
    }
}