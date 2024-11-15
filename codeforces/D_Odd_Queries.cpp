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
    int N , Q;
    cin >> N >> Q;
    vector<int> arr(N);
    for (int i = 0 ; i < N ; i++)
        cin >> arr[i];
    vector<int> prefix_sum(N + 1 , 0);
    for (int i = 0 ; i < N ; i++)
        prefix_sum[i + 1] = prefix_sum[i] + arr[i];

    while (Q--) {
        int a , b , c;
        cin >> a >> b >> c;
        a--;b--;

        int full = prefix_sum[N];
        int range = prefix_sum[b + 1] - prefix_sum[a];
        int ans = full - range + (b - a + 1) * c;

        cout << (ans & 1 ? "YES" : "NO") << endl;
    }
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