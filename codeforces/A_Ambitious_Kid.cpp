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

using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void run_case () {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (auto &a : arr) {
        cin >> a;
        if (a == 0) {
            cout << 0 << endl;
            return;
        }
    }

    int close_zero_number = 1e5;

    for (int i = 0 ; i < N ; i++)
        close_zero_number = min(close_zero_number , abs(arr[i]));

    cout << close_zero_number << endl;
}
int main() {
    int tt = 1;
    while (tt--)
        run_case();
    return 0;
}