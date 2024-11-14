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

void run_case() {
    int N, Q;
    cin >> N >> Q;
    vector<int> arr(N);
    for (auto &a : arr)
        cin >> a;

    vector<int> prefix_sum(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + arr[i];
    }

    while (Q--) {
        int a, b, c;
        cin >> a >> b >> c;
        a--; b--;

        int original_sum = prefix_sum[N];
        int range_sum = prefix_sum[b + 1] - prefix_sum[a];
        int new_sum = original_sum - range_sum + (b - a + 1) * c;

        cout << (new_sum & 1 ? "YES" : "NO") << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}
