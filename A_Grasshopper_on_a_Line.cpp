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
    int N , K;
    cin >> N >> K;
    vector<int> ans , nums;
    if (N < K && N % K != 0) 
        cout << 1 << endl << N << endl;
    else if (N % K != 0)
        cout << 1 << endl << N << endl;
    else {
        for (int i = 1 ; i < N ; i++)
            if (K % i != 0 && i != K)
                nums.push_back(i);
        
        int last = nums.size() - 1;
        while (last >= 0 && N >= 0) {
            if (N - nums[last] >= 0)
                N -= nums[last--];
            else
                last--;
        }
        cout << nums.size() << endl;
    }
}
int main() {
    int tt;
    cin >> tt;
    while (tt--)
        run_case();
    return 0;
}