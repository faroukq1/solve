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
    int64_t N;
    cin >> N;
    if (N & 1 || N <= 2) {
        cout << -1 << endl;
        return;
    }

    if (N % 4 == 0 && N % 6 != 0)
        cout << N / 4 << ' ' << N / 4 << endl;
    else if (N % 6 == 0 && N % 4 != 0)
        cout << N / 6 << ' ' << N / 6 << endl;
    else
        cout << N / 6 << ' ' << N / 4 << endl;
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