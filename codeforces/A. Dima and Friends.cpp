#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    int N , sum = 0 , ans = 0;
    cin >> N;
    for (int i = 0 , a ; i < N ; i++) {
        cin >> a;
        sum += a;   
    }
    for (int i = 1 ; i <= 5 ; i++) 
        if ((sum + i) % (N + 1) != 1) ans++;
    cout << ans << endl;
}