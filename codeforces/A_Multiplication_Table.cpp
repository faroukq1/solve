#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    long long a ,b;
    cin >> a >> b;
    long long occur = 0;
    for (int i = 1 ; i <= a ; i++) {
        if (b % i != 0)
            continue;
        
        if (b >= i && b <= (i * a))
            occur++;
    }
            
    cout << occur << endl;
    return 0;
}