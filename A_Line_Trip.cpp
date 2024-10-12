#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int N , M;
    cin >> N >> M;
    vector<int> arr(M , 0);

    for (int i = 0 ; i < N ; i++) {
        int a;
        cin >> a;
        arr[a - 1] = 1;
    }


    int mn = 0 , min_cost = 0 , ans = 0;
    for (int i = 0 ; i < M ; i++) {
        if (arr[i] == 0)
            min_cost--;
        else {
            ans = min(min_cost , ans);
            min_cost = 0;
        }
    }

    for (int i = M - 2 ; i >= 0 ; i--)
        if (arr[i] == 0)
            min_cost--;
        else {
            ans = min(min_cost , ans);
            min_cost = 0;
        }

    cout << abs(ans) + 1 << endl; 
    // 1 2 5
    // 1 1 0 0 1 0 0
    // 0 0 -1 0 -1 -2
    // -3 0 -1 -2 0 0 min == 3 + 1 ==> 4

    // 1 2 5
    // 1 1 0 0 1 0
    // 0 0 -1 -2 0 -1
    // -2 0 -1 -2 0 0 --> min ==> 2 + 1 ==> 3

    // 7
    // 0 0 0 0 0 0 1 0 0 0
    // -1 -2 -3 -4 -5 -6 0 -1 -2 -3
    // -4 -5 -6 0 -1 -2 -3 -4 -5 -6 ==> min(6) + 1 ==> 7

}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}