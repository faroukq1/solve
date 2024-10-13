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


const int B = 10;
void solve() {
    vector<string> m(B);
    for(long p = 0; p < B; p++)
        cin >> m[p];

    long total(0);
    for(long row = 0; row < B; row++){
        for(long col = 0; col < B; col++){
                if(m[row][col] == '.'){continue;}
                long xrow = (row < B - 1 - row) ? row : (B - 1 - row);
                long xcol = (col < B - 1 - col) ? col : (B - 1 - col);
                long score = 1 + (xrow < xcol ? xrow : xcol);
                total += score;
        }
    }
        
    printf("%ld\n", total);
    }

int main() {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}