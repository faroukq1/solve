#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    long long a , b;
    cin >> a >> b;
    if (a == 0 && b == 0) {
        cout << "0 0" << endl;
        return;
    }

    long long a_dollars = 0 , b_dollars = 0;

    if (a > b) {
        while (a != b) {
            a--;
            b++;

            a_dollars += 2;
        }
    }    


    cout << a_dollars + b_dollars << endl;
}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}