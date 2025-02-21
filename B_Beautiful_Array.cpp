#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

// limited time exceeded
void run_case() {
    // solving
    int64_t n, k, b, s;
    cin >> n >> k >> b >> s;
    const int64_t diff = s - (k * b);
    cout << s - diff << ' ';
    for (int i = 0; i < diff; i++)
        cout << 1 << ' ';

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