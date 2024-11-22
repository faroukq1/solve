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
    int N , z_cpt = 0;
    cin >> N;
    vector<int> arr(N);
    for (auto &a : arr)
        cin >> a;

    if (arr == vector<int>(N , 0)) {
        cout << 0 << endl;
        return;
    }

    int l = 0 , r = N - 1;
    while (arr[l] == 0)
        l++;

    while (arr[r] == 0)
        r--;

    for (int i = l ; i <= r ; i++)
        if (arr[i] == 0) {
            cout << 1 << endl;
            return;
        }

    cout << 2 << endl;
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