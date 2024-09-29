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
    map <string , int> store;
    for (int i = 0 ; i < s.length() - 1 ; i++)
        if (s[i] == 'a' && s[i + 1] == 'b')
            store["ab"]++;
        else if (s[i] == 'b' && s[i + 1] == 'a')
            store["ba"]++;

    int ba = store["ba"] , ab = store["ab"];

    if (ba == ab) {
        cout << s << endl;
        return;
    }

    if (ab > ba) {
        if (s[0] == 'a')
            s[0] = 'b';
        else
            s[0] = 'a';
    } else {
        if (s[0] == 'b')
            s[0] = 'a';
        else
            s[0] = 'b';
    }


    cout << s << endl;
}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}