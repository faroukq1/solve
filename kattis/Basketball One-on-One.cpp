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
    vector<pair<char, int>> store(2);
    store[0] = {'A', 0};
    store[1] = {'B', 0};
    string s;
    cin >> s;
    const int N = s.length();
    for (int i = 0; i < N; i += 2) {
        const char letter = s[i];
        const int score = s[i + 1];
        if (letter == 'A')
            store[0].second += score;
        else
            store[1].second += score;
    }

    const bool a_win = store[0].second > store[1].second;
    cout << (a_win ? "A" : "B") << endl;
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