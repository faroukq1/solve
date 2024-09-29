#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int n , a, b, c , d;
    cin >> n >> a >> b >> c >> d;

    int minWeight = a - b , maxWeight = a + b;
    int minRange = c - d , maxRange = c + d;

    if ((maxWeight * n >= minRange) 
        && (minWeight * n <= maxRange))
        cout << "Yes";
    else
        cout << "No";

    cout << endl;
}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}