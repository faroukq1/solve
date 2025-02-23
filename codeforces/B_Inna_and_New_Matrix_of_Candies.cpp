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
    int N, M;
    cin >> N >> M;
    vector<string> grid(N);
    for (auto &g : grid)
        cin >> g;

    set <int> distances;
    int ans = INT_MIN;
    for (auto &s : grid) {
        int gp = -1, sp = -1;
        for (int i = 0; i < M; i++) {
            if (s[i] == 'G') gp = i;
            if (s[i] == 'S') sp = i;
        }

        if (sp < gp)
            return void(cout << -1 << endl);

        // dbg(sp, gp);
        distances.insert(sp - gp);
    }
    cout << distances.size() << endl;
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