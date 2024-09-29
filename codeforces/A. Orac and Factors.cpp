#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int a, b;
    cin >> a >> b;
    int smallDiv = -1;
    for (int i = 2 ; i <= sqrt(a) ;  i++)
        if (a % i == 0) {
            smallDiv = i;
            break;
        }

    if (smallDiv == -1)
        smallDiv = a;

    a += smallDiv;

    
    a += 2 * (b - 1);

    cout << a << endl;
}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}