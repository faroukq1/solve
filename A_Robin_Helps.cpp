#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve () {
    int N , K;
    cin >> N >> K;
    int gold = 0 , ans = 0;

    for (int i = 0 , a; i < N ; i++) {
        cin >> a;
        if (a >= K)
            gold += a;

        if (a == 0 && gold > 0) {
            gold--;
            ans++;
        }
    }

    cout << ans << '\n';
}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}