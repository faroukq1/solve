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
    for (int i = 0; i < N; i++)
        cin >> A[i];

    vector<int> P(N);
    bool valid = true;
    int beg = 0;
    while (beg < N) {
        int end = beg;
        while (end + 1 < N && A[end + 1] == A[end])
            end++;

        if (end == beg) {
            valid = false;
            break;
        }

        P[beg] = end;
        for (int i = beg + 1; i <= end; i++)
            P[i] = i - 1;

        beg = end + 1;
    }

    if (!valid)
        return void(cout << -1 << endl);

    for (int i = 0; i < N; i++)
        cout << P[i] + 1 << ' ';

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