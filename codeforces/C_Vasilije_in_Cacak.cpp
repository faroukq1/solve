#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve () {
    long long n , k , x , last;
    cin >> n >> k >> x;
    long long min_sum = k * (k + 1) / 2;
    if (x < min_sum) {
        cout << "NO" << endl;
        return;
    }    

    long long max_sum = k * (2 * n - k + 1) / 2;

    if (x > max_sum) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}



int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}