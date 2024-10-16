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
    int N , even = 0 , odd = 0;
    cin >> N;
    vector<int> arr(N);
    for (auto &a : arr) {
        cin >> a;
        (a % 2 == 0 ? even += a : odd += a);
    }

    if (N == 2) 
        cout << ((odd == 0 && even != 0) || (even == 0 && odd != 0) ? "YES" : "NO");
    else
        cout << ((odd == even) || (odd % 2 == 0) ? "YES" : "NO");

    cout << endl;
}
int main() {
    int tt;
    cin >> tt;
    while (tt--)
        run_case();
    return 0;
}