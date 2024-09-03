#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int a , b , c;
    cin >> a >> b >> c;

    int x_moves = a / c , y_moves = b / c;
    if (a % c != 0)
        x_moves++;
    if (b % c != 0)
        y_moves++;
    
    
    cout << max(x_moves , y_moves) * 2 << endl;
}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}