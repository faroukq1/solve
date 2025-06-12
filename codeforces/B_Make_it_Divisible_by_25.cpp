#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << " " << H;
    dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void run_case() {
    string s;
    cin >> s;
    const int len = s.length();
    int best = len;

    for (int i = 0; i < len; i++) {
        if (s[i] == '0') {
            best = min(best, len - 1);
        }
        for (int j = i + 1; j < len; j++) {
            int num = (s[i] - '0') * 10 + (s[j] - '0');
            if (num % 25 == 0) {
                best = min(best, len - (j + 1) + (j - i - 1));
            }
        }
    }

    cout << best << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;
    while (tests-- > 0)
        run_case();

    return 0;
}
