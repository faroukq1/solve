#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int64_t N = 7;

void solve () {
    vector<int64_t> A(N);
    for (auto &a : A)
        cin >> a;

    sort(A.rbegin(), A.rend());
    A.front() = A.front() * -1;
    const int64_t sum = accumulate(A.begin(), A.end(), int64_t(0));
    cout << -sum << endl;
}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}