#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

bool isPalindrom (string &s) {
    int i = 0 , j = s.length() - 1;
    while (i <= j)
        if (s[i] != s[j])
            return false;
    return true;
}


void solve () {
    int n , k;
    cin >> n >> k;
    vector<char> arr(n);
    if (n == 1) {
        cout << "YES" << endl;
        return;
    }

    if (n == 2 && k == 0) {
        cout << "NO" << endl;
        return
    }

    for (auto &a : arr)
        cin >> a;
}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}