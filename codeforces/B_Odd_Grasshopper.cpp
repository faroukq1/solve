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
    // long long N, M;
    // cin >> N >> M;
    // long long M2 = M / 4 * 4;
    // while (M2 < M) {
    //     if (N % 2 == 0)
    //         N -= M2 + 1;
    //     else
    //         N += M2 + 1;

    //     M2++;
    // }

    // cout << N << endl;
    long long X, N;
    cin >> X >> N;
    long long D = -1;
    switch (N % 4) {
        case 0 : D = 0; break;
        case 1 : D = -N; break;
        case 2 : D = 1; break;
        case 3 : D = N + 1; break;
    }

    cout << (X % 2 == 0 ? X + D : X - D) << '\n';
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