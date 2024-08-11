#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int cpt = 0;
    for (int i = min(a , b) ; i <= max(a , b) ; i++) 
        if (i == c || i == d)
            cpt++;
        

    if (cpt & 1)
        cout << "YES";
    else
        cout << "NO";

    cout << endl;
    
}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}