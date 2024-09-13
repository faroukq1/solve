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

    long long diff = b - a;
    int k = 1;

    while (k * (k + 1) / 2 <= diff)
        k++;

    cout << k << endl;
}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}