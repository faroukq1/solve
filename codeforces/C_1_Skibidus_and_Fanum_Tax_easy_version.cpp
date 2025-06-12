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
#include <climits>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

// void run_case() {
//     int N, M;
//     cin >> N >> M;
//     int prev = INT_MIN;
//     vector<int> arr(N);
//     for (int i = 0; i < N; i++)
//         cin >> arr[i];

//     int a;
//     cin >> a;

//     for (int i = 0; i < N; i++) {
//         const int calculate_min = min(arr[i], a - arr[i]);
//         const int calculate_max = max(arr[i], a - arr[i]);
//         if (calculate_min > prev)
//             arr[i] = calculate_min;
//         else
//             arr[i] = calculate_max;
        
//         if (arr[i] < prev) {
//             cout << "NO" << endl;
//             return;
//         }
//         prev = arr[i];
//     }
//     cout << "YES" << endl;
// }

void run_case () {
    int N, M;
    cin >> N >> M;
    vector<int> arr(N);
    for (auto &a : arr)
        cin >> a;

    int a;
    cin >> a;
    arr[0] = min(arr[0], a - arr[0]);
    for (int i = 1; i < N; i++) {
        arr[i] = min(arr[i], a - arr[i]);
        if (arr[i] < arr[i - 1]) 
            arr[i] = a - arr[i];

        if (arr[i] < arr[i - 1]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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