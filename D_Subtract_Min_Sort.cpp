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
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;

    bool already_sorted = true;
    for (int i = 0; i < N - 1; i++)
        already_sorted = already_sorted || A[i] <= A[i + 1];

    if (already_sorted)
        return void(cout << "YES" << endl);

    for (int i = 0; i < N - 1; i++) {
        const int mn = min(A[i], A[i + 1]);
        A[i] -= mn;
        A[i + 1] -= mn;
    }

    for (int i = 0; i < N - 1; i++)
        if (A[i] > A[i + 1]) {
            cout << "NO" << endl;
            return;
        }

    cout << "YES" << endl;
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