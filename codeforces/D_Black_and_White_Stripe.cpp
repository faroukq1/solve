#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void run_case() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int white_count = 0;
    for (int i = 0; i < k; i++) {
        if (s[i] == 'W') white_count++;
    }

    int min_recolor = white_count;

    for (int i = k; i < n; i++) {
        if (s[i - k] == 'W') white_count--;
        if (s[i] == 'W') white_count++;
        min_recolor = min(min_recolor, white_count);
    }

    cout << min_recolor << "\n";
}

void solve () {
    int N, K;
    string s;
    cin >> N >> K >> s;

    int ans = 0;
    int first = 0, last = K;

    while (first < N && last)
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests;
    cin >> tests;

    while (tests-- > 0)
        solve();
}