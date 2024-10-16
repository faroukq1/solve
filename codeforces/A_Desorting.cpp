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
#include<limits.h>
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
    vector<long long> arr(N);
    for (auto &a : arr)
        cin >> a;

    bool not_sorted = false;

    for (int i = 0 ; i < N - 1 ; i++)
        if (arr[i] > arr[i + 1]) {
            not_sorted = true;
            break;
        }

    if (not_sorted) {
        cout << 0 << endl;
        return;
    }
    
    long long diff = INT_MAX;
    for (int i = 0 ; i < N - 1 ; i++)
        diff = min(diff , abs(arr[i] - arr[i + 1]));

    if (diff == 0)
        cout << 1 << endl;
    else
        cout << (diff / 2) + 1 << endl;
}
int main() {
    int tt;
    cin >> tt;
    while (tt--)
        run_case();
    return 0;
}