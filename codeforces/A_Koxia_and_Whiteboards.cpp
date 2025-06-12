#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int N , M;
    cin >> N >> M;
    vector<long long> A(N) , B(M);

    for (auto &a : A)
        cin >> a;
    
    for (auto &b : B)
        cin >> b;

    sort(A.begin(),A.end());

    for (int i = 0 ; i < M ; i++) {
        A[0] = B[i];
        sort(A.begin(),A.end());
    }

    long long ans = 0;

    for (auto a : A)
        ans += a;

    cout << ans << endl;

}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}

// 1 2 3 => 6
// 4 2 3 => 9
// 4 5 3 => 12