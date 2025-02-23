#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const string want = "bear";
void run_case() {
    // solving
    string s;
    cin >> s;
    const int N = s.length();
    vector<int> store;
    for (int i = 0; i + 3 < N; i++) {
        bool valid = s[i] == 'b' && s[i + 1] == 'e' && s[i + 2] == 'a' && s[i + 3] == 'r';
        if (valid)
            store.push_back(i + 1);
    }

    int ans = 0;
    for (int i = 0; i < store.size(); i++) {
        int y = N - store[i] - 2, x = 1;
        if (i) x = store[i - 1] + 1;
        x = store[i] - x + 1;
        ans += (x * y);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests = 1;
    // cin >> tests;

    while (tests-- > 0)
        run_case();
}