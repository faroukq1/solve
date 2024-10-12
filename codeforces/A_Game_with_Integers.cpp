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
    cout << (N % 3 == 0 ? "Second" : "First") << endl; 
}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}