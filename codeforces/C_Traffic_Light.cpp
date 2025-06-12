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
    char C;
    cin >> N >> C;
    string s;
    cin >> s;
    
    s.append(s);
    int ans = -1e9, last = -1;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == 'g')
            last = i;

        if (s[i] == C)
            ans = max(ans, last - i);
    }
    cout << ans << endl;
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