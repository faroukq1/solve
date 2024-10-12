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


void run_case () {
    int N;
    cin >> N;
    map < int , int > store;
    for (int i = 0 ; i < N ; i++) {
        int a;
        cin >> a;
        store[a]++;
    }
    if (store.size() > 2) {
        cout << "No" << endl;
        return;
    }

    int mx = 0 , mn = 1e7;
    
    for (auto &a : store) {
        mn = min(mn , a.second);
        mx = max(mx , a.second);
    }
    cout << (mn == mx || mx == mn + 1 ? "Yes" : "No") << endl;
}
int main() {
    int tt;
    cin >> tt;
    while (tt--) 
        run_case();
    return 0;
}