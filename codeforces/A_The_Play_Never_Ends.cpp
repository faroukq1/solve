#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


// pass the pretest (solved)
void run_case() {
    // solving
    int64_t N;
    cin >> N;
    if (N == 1)
        return void(cout << "YES" << endl);

    if (N < 4)
        return void(cout << "NO" << endl);

    
    cout << (N % 3 == 1 ? "YES" : "NO") << endl;
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