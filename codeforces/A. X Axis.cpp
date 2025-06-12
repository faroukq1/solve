#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)



void solve () {
    int a, b, c , ans = 11;
    cin >> a >> b >> c;
    for (int i = 1 ; i <= 10 ; i++)
        ans = min(ans , (abs(i - a) + abs(i - b) + abs(i - c)));
        
    cout << ans << endl;
}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}