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


void solve () {
    int N , K;
    cin >> N >> K;
    vector<int> arr(N);

    int number_of_K = 0;
    for (auto &a : arr) {
        cin >> a;
        if (a == K) number_of_K++;
    }

    // if only exist one K then the answer will be YES
    if (number_of_K == 1) {
        cout << "YES" << endl;
        return;
    }
    // check is there is 2 K adjance
    for (int i = 0 ; i < N - 1 ; i++)
        if (arr[i] == K && arr[i + 1] == K) {
            cout << "YES" << endl;
            return;
        }

    map < int , int > store;

    for (auto &a : arr)
        store[a]++;

    cout << (store[K] >= 2 ? "YES" : "NO") << endl;

}
int main() {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}