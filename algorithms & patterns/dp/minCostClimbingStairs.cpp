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
    int N;
    cin >> N;
    vector<int> coast(N);
    for (auto &c : coast)
        cin >> c;

    coast.push_back(0);

    for (int i = N - 3; i >= 0; i--)
        coast[i] = min(coast[i + 1], coast[i + 2]);
    
    cout << min(coast[0], coast[1]) << endl;
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