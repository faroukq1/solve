#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


// not by me
void solve() {
    int n, x;
    int64_t k;
    cin >> n >> x >> k;
    
    string s;
    cin >> s;
    
    int p = 0;
    int len = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i - 1] == 'L') p--;
        else p++;
        
        if (p == 0) { len = i; break; }
    }
    
    p = x;
    int64_t ans = 0;
    for (int i = 1; i <= n && k; i++) {
        k--;
        if (s[i - 1] == 'L') p--;
        else p++;
        if (p == 0) { ans++; break; }
    }
    if (ans && len) ans += k / len;

    cout << ans << endl;
}


int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests;
    cin >> tests;

    while (tests-- > 0)
        solve();
}