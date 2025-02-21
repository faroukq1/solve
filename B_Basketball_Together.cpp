#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


// WRONG ON TEST CASE 24
void run_case() {
    // solving
    int64_t N, M;
    cin >> N >> M;
    vector<int64_t> powers(N);
    for (auto &p : powers)
        cin >> p;

    sort(powers.rbegin(), powers.rend());

    int64_t mx = INT_MIN, counter = 0, ans = 0;
    for (int i = 0; i < N; i++) {
        mx = max(mx, powers[i]);
        counter += mx;
        if (counter > M) {
            ans++;
            counter = 0;
            mx = INT_MIN;
        }
    }
    cout << ans << endl;
}

void solve () {
    int64_t N, D;
    cin >> N >> D;
    vector<int64_t> P(N);
    for (auto &p : P) cin >> p;
    
    sort(P.rbegin(), P.rend());
    
    int64_t ans = 0;
    int r = N;
    for (int i = 0; i < r; i++) { 
        int t = D / P[i] + 1;
        if (r - i < t)
            break;

        r -= t - 1;
        ans++;
    }
    cout << ans << endl;
}
int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests = 1;
    // cin >> tests;

    while (tests-- > 0) solve();
}