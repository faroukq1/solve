#include<bits/stdc++.h>
using namespace std;



void solve () {
    string s;
    cin >> s;
    int N = s.length() , zero = 0 , one = 0;
    for (int i = 0 ; i < N ; i++)
        if (s[i] == '0')
            zero++;
        else
            one++;

    int ans = 0 , tc0 = 0 , tc1 = 0;

    for (int i = 1 ; i <= N ; i++) {
        if (s[i - 1] == '0')
            tc1++;
        else
            tc0++;

        if (tc0 <= zero && tc1 <= one)
            ans = i;
    }

    cout << N - ans << endl;
}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}