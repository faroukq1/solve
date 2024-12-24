#include<bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    long long N , ans = 0 , mn = 1e6;
    cin >> N;

    while (N--) {
        long long curr_day , curr_price;
        cin >> curr_day >> curr_price;
        mn = min(mn , curr_price);
        ans += mn * curr_day;
    }

    cout << ans << endl;
}