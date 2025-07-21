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
    cin >> N;
    vector<int64_t> A(N);
    for (auto &a : A)
        cin >> a;

    int64_t ans = 0;
    for (int i = 0; i < N; i++) {
        if (i != 0 && A[i] < A[i - 1]) {
            const int64_t diff = abs(A[i] - A[i - 1]);

            ans += diff;
            A[i] += diff;
        }
    }

    cout << ans << endl;
}

int main () {
    int test = 1;
    // cin >> test;
    while (test--)  solve();
}