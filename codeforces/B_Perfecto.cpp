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
    auto isSquare = [&] (int64_t num) -> bool {
        int x = sqrt(num);
        return 1LL * x * x == num;
    };
    int N;
    cin >> N;

    int64_t sum = 1LL * N * (N + 1) / 2;
    if (isSquare(sum))
        return void(cout << -1 << endl);
        
    vector<int> P(N);
    iota(P.begin(), P.end(), 1);
    for (int i = 1; i < N; i++)
        if (isSquare(1LL * i * (i + 1) / 2))
            swap(P[i], P[i - 1]);

    for (auto p : P)
        cout << p << ' ';

    return void(cout << endl);
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}