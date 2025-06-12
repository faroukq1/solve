#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


const int MX = 10;
int64_t N;
string s, res;
void run_case() {
    // solving
    cin >> N >> s;
    res = s;
    for (int i = 0; i < MX; i++) {
        for (int k = 0; k < N; k++)
            res = min(res, s.substr(k) + s.substr(0, k));

        for (char &c : s) { 
            c += 1; if (c > '9') c = '0';
        }
    }
    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests = 1;

    while (tests-- > 0)
        run_case();
}