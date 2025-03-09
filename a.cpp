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
    cin >> s;
    const int len = int(s.length());
    dbg(s, len);
    if (len <= 10)
        cout << s << endl;
    else
        cout << s.front() << len - 2 << s.back() << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests = 1;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}
