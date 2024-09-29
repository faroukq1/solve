#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve () {
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=n; i>=m+1; --i)
        cout<<i<<" ";
    for(int i=1; i<=m; ++i)
        cout<<i<<" ";
    cout<<endl;
}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}
