#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int64_t N = 7;

void solve () {
    int N;
    cin >> N;
    if (N >= 67)
        cout << 67 << endl;
    else if (N <= -67)
        cout << -67 << endl;
    else
        cout << N + 1 << endl;
}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}