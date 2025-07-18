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
    while (N > 1) {
        cout << N << ' ';
        if (N % 2 == 0)
            N /= 2;
        else
            N = (N * 3) + 1;
    }

    cout << N << ' ';
}

int main () {
    int test = 1;
    // cin >> test;
    while (test--)  solve();
}