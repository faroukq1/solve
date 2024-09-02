#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int a , b;
    cin >> a >>b;
    if (a == b)
        cout<<"0 0";
    else if (b < a) 
        cout<< a - b << " " << min(a % (a - b),(a - b) - a % (a - b));
    else
        cout<< b - a << " " << min(b % (b - a),(b - a) - b % (b - a));
        cout << "\n";
}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}