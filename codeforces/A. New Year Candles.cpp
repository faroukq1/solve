#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    int a , b;
    cin >> a >> b;
    int ans = 0;
    int candles = a;
    int left_over = 0;
    while (candles > 0) {
        ans += candles;  
        int newCandles = (candles + left_over) / b;
        left_over = (candles + left_over) % b; 
        candles = newCandles;
    }
    
    cout << ans  << endl;
    return 0;
}