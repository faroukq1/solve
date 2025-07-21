#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    string s;
    cin >> s;
    const long long N = s.length();
    long long current_sum = 1;
    long long ans = 1;
    for (int i = 0; i < N; i++) {
        if (i != 0 && s[i] == s[i - 1])
            current_sum++;
        else {
            ans = max(ans, current_sum);
            current_sum = 1;
        }
    }
    cout << max(ans, current_sum) << endl;

}

int main () {
    int test = 1;
    // cin >> test;
    while (test--)  solve();
}