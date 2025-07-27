#include <bits/stdc++.h>
using namespace std;
 
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
 
 
void solve () {
    int64_t N;
    cin >> N;
    if (N == 1)
        return void(cout << 1 << endl);
 
    if (N == 4)
        return void(cout << "2 4 1 3" << endl);
 
    
    if (N <= 3)
        return void(cout << "NO SOLUTION" << endl);
 
    for (int64_t i = 1; i <= N; i+=2)
        cout << i << ' ';
    for (int64_t i = 2; i <= N; i+=2)
        cout << i << ' ';
 
    cout << endl;
 
    
}
 
int main () {
    int test = 1;
    // cin >> test;
    while (test--)  solve();
}