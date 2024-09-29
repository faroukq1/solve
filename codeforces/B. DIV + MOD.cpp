#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve() {
    int64_t a , b , c;
    cin >> a >> b >> c;

    int64_t max_value = (b / c) + (b % c);

    int64_t next_mult = b - (b % c) - 1;

    if (next_mult >= a)
        max_value = max(max_value ,(next_mult / c) + (next_mult % c));

    cout << max_value << endl;
}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}