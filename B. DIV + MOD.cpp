#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
   long t; 
   scanf("%ld", &t);
        long l, r, a; scanf("%ld %ld %ld", &l, &r, &a);
        long d = r / a;
        long m = r % a;
        long res = d + m;
        long prev = (d - 1) * a + (a - 1);
        if(prev >= l){
            long tmp = (d - 1) + (a - 1);
            res = (res > tmp) ? res : tmp;
        }

    printf("%ld\n", res);
    
}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}