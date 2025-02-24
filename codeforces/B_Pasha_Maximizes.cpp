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
    string s;
    int k;
    cin >> s >> k;
    const int N = int(s.length());
    for (int i = 0; i < N; i++) {
        int mx = s[i] - '0';
        int idx = -1;
        int dis = 0;
        for (int j = i + 1; j < N; j++) {
            if (s[j] - '0' > mx && k >= j - i) {
                idx = j;
                dis = j - i;
                mx = s[j] - '0';
            }
        }

        if (idx == -1)
            continue;
        
        k -= dis;

        for (int j = idx; j > i; j--)
            swap(s[j], s[j - 1]);
    } 
    cout << s << endl;
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