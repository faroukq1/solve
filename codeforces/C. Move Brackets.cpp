#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void run_case () {
    int N;
    string s;
    cin >> N >> s;
    int s1 = 0 , ans = 0;
    for (int i = 0 ; i < N ; i++) {
        if (s[i] == '(')
            s1++;
        else {
            if (s1 > 0)
                s1--;
            else
                ans++;
        }
    }

    cout << ans << endl;
}

int main () {
    int tt;
    cin >> tt;
    while (tt--)
        run_case();
    return 0;
}