#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <limits>
#include <string>

using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (auto &a : arr)
        cin >> a;

    while (true) {
        bool finish = true;
        for (int i = 1; i < N - 1 ; i++)
            if (arr[i] > arr[i + 1] && arr[i] > arr[i - 1]) {
                swap(arr[i] , arr[i + 1]);
                finish = false;
            }
        if (finish)
            break;
    }
    bool sorted = is_sorted(arr.begin(),arr.end());

    cout << (sorted ? "YES" : "NO") << endl;
}
int main() {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}