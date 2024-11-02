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
#include <unordered_map>using namespace std;

int main() {
    srand(time(0));
    int n = 10;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        arr[i] = rand() % 100;

    vector<int> lis;
    for (int i = 0; i < n; ++i) {
        auto pos = lower_bound(lis.begin(), lis.end(), arr[i]);
        if (pos == lis.end()) lis.push_back(arr[i]);
        else *pos = arr[i];
    }

    cout << "Length of Longest Increasing Subsequence: " << lis.size() << endl;
    return 0;
}
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


void solve () {
    long long N , K , X;
    cin >> N >> K >> X;

    long long min_sum = K * (K + 1) / 2;
    if (X < min_sum) {
        cout << "NO" << endl;
        return;
    }

    long long max_sum = K * (2 * N - K + 1) / 2;

    if (X > max_sum)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}
int main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}