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


void run_case () {
    long long N;
    cin >> N;
    vector<int> arr(N);
    map < int , int > store;

    for (auto &a : arr) {
        cin >> a;
        store[a]++;
    }

    int sum = store[2] , total = 0;

    for (int i = 0 ; i < N ; i++) {
        total += arr[i] == 2;
        if (total == sum - total) {
            cout << i + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
        run_case();
    return 0;
}