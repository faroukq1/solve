#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve () {
    int N , M;
    cin >> N >> M;

    if (M % N != 0) {
        cout << -1 << endl;
        return;
    }


    long long ratio = M / N;
    long long ans = 0;

    while (ratio % 2 == 0) {
        ratio /= 2;
        ans++;
    }
    while (ratio % 3 == 0) {
        ratio /= 3;
        ans++;
    }

    cout << (ratio == 1 ? ans : -1) << endl;

    
}
int main () {
    int tt = 1;
    // cin >> tt;
    while (tt--)
        solve();
}