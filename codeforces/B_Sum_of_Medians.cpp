#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N * K);
    for (auto &a : A)
        cin >> a;

    long long ans = 0;
    int step = (N + 2) / 2;
    int from = (N * K) - step;

    for (int i = 0; i < K; i++) {
        ans += A[from];
        from -= step;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;
    while (tests-- > 0)
        run_case();
}
