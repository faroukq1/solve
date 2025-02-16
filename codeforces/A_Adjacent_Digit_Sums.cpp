#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


// wrong answer
// void run_case() {
//     // solving
//     int N, M;
//     cin >> N >> M;
//     string s = to_string(N + 1);
//     const int len = (int)s.length();
//     while (s.length() > 1) {
//         int temp = 0;
//         for (int i = 0; i < s.length(); i++) {
//             temp += s[i] - '0';
//         }
//         string c = to_string(temp);
//         if (c == s) {
//             cout << "Yes" << endl;
//             return;
//         }
//         s = c;
//     }
//     bool ans = to_string(M) == s;
//     cout << (ans ? "Yes" : "No") << endl;
// }

void run_case () {
    int a, b;
    cin >> a >> b;
    bool is_valid = (a + 1) % 9 == b % 9;
    if (is_valid)
        cout << (a + 1 >= b ? "Yes" : "No") << endl;
    else
        cout << "No" << endl;
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