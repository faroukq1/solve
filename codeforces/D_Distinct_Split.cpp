#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int N;
    string s;
    cin >> N >> s;
    vector<int> left_distinc(N , 0) , right_distinc(N , 0);

    set <char> seen;

    for (int i = 0 ; i < N ; i++) {
        seen.insert(s[i]);
        left_distinc[i] = seen.size();
    }

    seen.clear();

    for (int i = N - 1 ; i >= 0 ; i--) {
        seen.insert(s[i]);
        right_distinc[i] = seen.size();
    }

    int max_distinc = 0;

    for (int i = 0 ; i < N - 1 ; i++) 
        max_distinc = max(max_distinc , left_distinc[i] + right_distinc[i + 1]);
    

    cout << max_distinc << endl;
}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}