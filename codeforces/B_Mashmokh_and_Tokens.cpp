#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void run_case() {
    // solving
    int64_t N, A, B;
    cin >> N >> A >> B;
    for (int64_t i = 0; i < N; i++) {
        int64_t a;
        cin >> a;
        cout << ((a * A) % B ) / A << ' ';
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests = 1;

    while (tests-- > 0)
        run_case();
}