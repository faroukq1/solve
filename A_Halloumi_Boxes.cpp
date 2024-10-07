#include <bits/stdc++.h>
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
    vector<vector<int>> box;
    for (auto &a : arr)
        cin >> a;

    for (int i = 0 ; i < N - 1 ; i++)
        if (arr[i] > arr[i + 1])
}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}