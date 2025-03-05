#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void run_case() {
    // solving
    int a, b;
    cin >> a >> b;
    int ans = INT_MAX;
    for (int i = 0; i < 30; i++) {
        if (b + i == 1)
            continue;

        int res = i;
        int x = a;
        while (x > 0) {
            x /= b + i;
            res++;
        }
        ans = min(ans, res);
    }
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
        run_case();
}