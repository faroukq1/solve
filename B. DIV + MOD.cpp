#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve() {
    int64_t l, r, a;
    cin >> l >> r >> a;
    
    int64_t max_value = (r / a) + (r % a);
    
    int64_t x = r - (r % a) - 1;
    if (x >= l) {
        max_value = max(max_value, (x / a) + (x % a));
    }

    cout << max_value << endl;
}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}