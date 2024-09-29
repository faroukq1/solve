#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    long long N , ans = 0;
    cin >> N;
    bool even = N & 0;

    if (even) {
        cout << 1 << endl;
        return 0;
    }

    while (N > 0) {
        if (N % 2 == 1)
            ans++;
        
        N /= 2;
    }
    
    cout << ans  << endl;
    return 0;
}