#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int N;
    cin >> N;
    vector<int> divs;
    auto valid_div = [&] (int num) -> bool {
        for (auto &a : divs)    
            if (num % a != 0)
                return false;
        
        return true;
    };
    int ans = 1;
    for (int i = 1 ; i <= N ; i++) {
        if (to_string(ans).length() == N) {
            if (valid_div(ans)) {
                cout << ans << endl;
                return;
            }
        }
    }
}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}