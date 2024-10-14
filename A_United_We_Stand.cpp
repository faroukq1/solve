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
    vector<int> arr(N) , B , C;
    for (auto &a : arr)
        cin >> a;
    
    set < int > removed;
    B.push_back(arr[0]);
    removed.insert(arr[0]);

    for (int i = 1; i < N ; i++) {
        bool possible = removed.find(arr[i]) == removed.end();
        if (!possible)
            continue;
        
        bool indivisible = true;
        for (int k = 0 ; k < B.size() && indivisible ; k++) {
            if (arr[i] % B[k] == 0)
                indivisible = false;
        }
        if (indivisible)
            B.push_back(arr[i]);
    }
    for (auto &b : B)
        cout << b << ' ';
    cout << endl;
    //5
    // 1 2 3 4 5
    // B : 1 3 5
    // C : 2 4

    // 3
    // 1 3 5
    // B : 1
    // C : 3 5
}
int main() {
    int tt;
    cin >> tt;
    while (tt--)
        run_case();
    return 0;
}