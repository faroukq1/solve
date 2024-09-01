#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


using ll = long long;
void solve () {
    ll a , b , n;
    cin >> a >> b >> n;
    vector<ll> arr(n);
    for (auto &a : arr)
        cin >> a;
    
    ll cpt = 0;
    for (ll i = 0 ; i <= n ; i++) {
        ll diff = b - 1;
        b -= diff;
        cpt += diff;

        b = min(b + arr[i] , a);
        // dbg(diff , cpt , b);
    }
    cout << cpt + 1 << endl;
    // 3 + 1 = 4 + 1 = 5
    // 5 4 3 2 min(1 + 7 , 5) 5 4 3 2 1

}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}