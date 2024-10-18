#include <iostream>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <numeric>
#include <random>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
#include <limits>
#include <string>
#include <limits.h>

using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


bool same_parity (int a , int b) {
    bool odd = (a & 1) && (b & 1) ,  even = (a & 0) && (b & 0);
    return odd || even;
}
void run_case () {
    int N;
    cin >> N;
    if (N == 1) {
        cout << 1 << endl;
        return;
    }
    vector<int> arr(N);
    for (auto &a : arr)
        cin >> a;

    int ans = 0, idx = 0;
    while (idx < N - 1) {
        if (same_parity(arr[idx] , arr[idx + 1])) {
            ans++;
            idx += 2;
        } else
            idx++;
    }

    cout << ans << endl;
}
int main() {
    int tt;
    cin >> tt;
    while (tt--)
        run_case();
    return 0;
}