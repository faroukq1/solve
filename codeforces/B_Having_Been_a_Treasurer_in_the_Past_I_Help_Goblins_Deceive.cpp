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
    long long N;
    string s;
    cin >> N >> s;
    long long dash = 0, under = 0;
    for (auto c : s)
        if (c == '-')
            dash++;
        else
            under++;

    long long dash_count = (dash + 1) / 2, 
              last_dash = dash / 2;

    cout << dash_count * under * last_dash << endl;
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