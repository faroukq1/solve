#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


int ceil_div (int a , int b) {
    return a / b + ((a ^ b) > 0 && a % b != 0);
}

void solve () {
    int a , b , c;
    cin >> a >> b >> c;

    int x_dir = ceil_div(a , c), y_dir = ceil_div(b ,c);

    cout << max(x_dir * 2 - 1 , y_dir * 2) << endl;
}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}