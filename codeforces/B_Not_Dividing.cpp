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
    vector<int> arr(N);
    for (auto &a : arr)
        cin >> a;

    // remove (1) because every number
    // is devisibe by (1)

    for (int i = 0 ; i < N ; i++)
        if (arr[i] == 1)
            arr[i]++;

    // if arr[i] % arr[i - 1] == 0 then arr[i]++;
    for (int i = 1 ; i < N ; i++)
        if (arr[i] % arr[i - 1] == 0)
            arr[i]++;

    for (int a : arr)
        cout << a << ' ';

    cout << endl;
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