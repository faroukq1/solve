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
    vector<int> A(N), B(N);
    set<int> seen, twice;
    for (auto &a : A) {
        cin >> a;
        seen.insert(a);
    }
    int ans = 0;
    for (auto &b : B) {
        cin >> b;
        if (seen.find(b) != seen.end()) {
            if (twice.find(b) == twice.end()) {
                ans++;
                twice.insert(b);
            } else {
                // do nothing
            }
        }
    }

    cout << ans + (ans != N ? 1 : 0) << endl;
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