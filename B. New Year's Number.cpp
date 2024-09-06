#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve()
{
	int n;
	cin >> n;
	while(n % 2020 != 0)
	{
		if(n % 2021 == 0) {
			cout << "YES" << endl;
            return;
		}
		n-=2021;
		if(n < 2020) {
			cout << "NO" << endl;
            return;
		}
	}
	cout << "YES" << endl;
}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}