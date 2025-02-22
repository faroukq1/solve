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
    int k = 0;
    while ((1 << (k + 1)) <= N - 1)
        k++;

    for (int i = (1 << k) - 1; i >= 0; i--)
        cout << i << ' ';
    for (int i = (1 << k); i < N; i++)
        cout << i << ' ';

    cout << endl;
}


int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests;
    cin >> tests;

    while (tests-- > 0) run_case();
}