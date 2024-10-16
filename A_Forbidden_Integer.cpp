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
void run_case() {
    int N, K, X;
    cin >> N >> K >> X;

    if (K == 1 && X == 1 && N == 1) {
        cout << "NO" << endl;
        return;
    }

    int max_sum = (K * (K + 1)) / 2 - X;
    if (N > max_sum) {
        cout << "NO" << endl;
        return;
    }

    vector<int> ans;
    for (int i = 1; i <= K && N > 0; ++i) {
        if (i == X) continue;
        if (N >= i) {
            ans.push_back(i);
            N -= i;
        }
    }

    if (N == 0) {
        cout << "YES" << endl;
        cout << ans.size() << endl;
        for (int num : ans)
            cout << num << " ";
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        run_case();
    }
    return 0;
}
