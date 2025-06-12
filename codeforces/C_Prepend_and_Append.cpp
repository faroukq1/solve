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
    int N;
    string s;
    cin >> N >> s;
    if (N == 0 || N == 1) {
        cout << N << endl;
        return;
    }

    int first = 0 , last = N - 1;
    auto valid = [&] (char a , char b) -> bool {
        return (a == '0' && b == '1') || (a == '1' && b == '0');
    };
    while (first <= last) {
        if (valid(s[first] , s[last])) {
            first++;
            last--;
        } else {
            int diff = last - first;
            cout << (diff == 0 ? 1 : diff + 1) << endl;
            return;
        }
    }

    cout << last - first + 1 << endl;
}
int main() {
    int tt;
    cin >> tt;
    while (tt--)
        run_case ();
    return 0;
}