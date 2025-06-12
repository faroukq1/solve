#include<bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


inline void run_case() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i) 
        cin >> a[i];
    bool ok = false;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (__gcd(a[i], a[j]) <= 2) ok = true;
        }
    }
    if (ok) cout << "Yes\n";
    else cout << "No\n";
}
int main() {
    int tt;
    cin >> tt;
    while (tt--)
        run_case();
    return 0;
}