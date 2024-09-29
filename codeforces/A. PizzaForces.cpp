#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)



void solve () {
    long long n;
	cin >> n;
	cout << max((long long)6, n + 1) / 2 * 5 << '\n';
}

int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}