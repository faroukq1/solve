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

    const int64_t full_sum = (N * (N + 1)) / 2;

    int64_t partial_sum = 0;
    for (int i = 0; i < N - 1; i++) {
        int64_t a;
        cin >> a;
        // dbg(a);
        partial_sum += a;
    }

    cout << full_sum - partial_sum << endl;
}

int main () {
    int test = 1;
    // cin >> test;
    while (test--)  solve();
}