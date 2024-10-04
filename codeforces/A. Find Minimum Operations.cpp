#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


vector<long long> ans;

void solve () {
    int N , K , P = 0;
    cin >> N >> K;
    if (K == 1)
        ans.push_back(N);
    else {
        while (N > 0) {
            P += (N % K);
            N /= K;
        }
        ans.push_back(P);
    }
    
}
int main () {
    long long tt;
    cin >> tt;
    while (tt--)
        solve();
    
    for (auto &a : ans)
        cout << a << endl;
    return 0;
}