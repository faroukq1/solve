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
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    vector<int> ans;
    ans.push_back(arr.front());

    for (int i = 1; i < N; i++) {
        if (arr[i] >= arr[i - 1])
            ans.push_back(arr[i]);
        else {
            ans.push_back(arr[i]);
            ans.push_back(arr[i]);
        }
    }

    const int M = (int)ans.size();
    cout << M << " ";
    for (int i = 0; i < M; i++) {
        cout << ans[i];
        if (i < M - 1)
            cout << " ";
    }    
    cout << endl;
}
int main() {
    int tt;
    cin >> tt;
    while (tt--)
        run_case();
    return 0;
}