#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


// div2 1007 can't solve the second question

void run_case() {
    // solving
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 1; i <= N; i++)
        A[i - 1] = i;

    vector<int> ans;
    bool find = false;
    do {
        vector<int> prefix_sum(N + 1, 0);
        for (int i = 0; i < N; i++)
            prefix_sum[i + 1] = prefix_sum[i] + A[i];

        bool win = true;
        for (int i = 1; i <= N; i++) {
            const int s = sqrt(prefix_sum[i]);
            if (s * s == prefix_sum[i]) {
                win = false;
                break;
            }
        }
        if (win) {
            ans = A;
            find = true;
            break;
        }
    } while (next_permutation(A.begin(), A.end()));

    if (!find)
        return void(cout << -1 << endl);

    for (auto a : ans)
        cout << a << ' ';

    cout << endl;
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