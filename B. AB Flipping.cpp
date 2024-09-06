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
    string s;
    cin >> N >> s;

    int cpt1 = N , cpt2 = 0;
    for (int i = 0 ; i < N ; i++) {
        if (s[i] == 'A')
            cpt1 = min(i , cpt1);
        if (s[i] == 'B')
            cpt2 = max(i , cpt2);
    }

    if (cpt1 > cpt2)    
        cout << 0 << endl;
    else
        cout << cpt2 - cpt1 << endl;
        
} 
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}