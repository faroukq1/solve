#include<bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void run_case() {
    long long N, K, even = 0;
    cin >> N >> K;
    vector<long long> A(N);
    for (auto &a : A) {
        cin >> a;
        even += a % 2 == 0;
    }

    if (K == 2) {
        cout << max(0LL, 1LL - even) << endl;
        return;
    }

    // K is 3 or 5 or 4
    long long mn = K;
    for (long long i = 0; i < N; i++) {
        long long op = (K - A[i] % K) % K;
        mn = min(mn, op);
    }

    if (K == 4)
        mn = min(mn, max(0LL, 2LL - even));

    cout << mn << endl;
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