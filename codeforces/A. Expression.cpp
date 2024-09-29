#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    int a , b, c;
    cin >> a >> b >> c;

    int ans = a + b + c;
	ans=max(ans,(a*b*c));
	ans=max(ans,(a+b)*c);
	ans=max(ans,a*(b+c));
	ans=max(ans,a+(b*c));
	ans=max(ans,(a*b)+c);
    cout << ans << endl;
}