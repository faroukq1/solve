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

void run_case() {
    int N, M;
    cin >> N >> M;
    vector<int> arr(N);
    for (auto &a : arr)
        cin >> a;

    int a;
    cin >> a;

    for (int i = 0; i < N; i++) {
        arr[i] = min(arr[i], a - arr[i]);
        if (is_sorted(arr.begin(), arr.end())) {
            cout << "YES" << endl;
            return;
        }
    }

    if (is_sorted(arr.begin(), arr.end()))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}