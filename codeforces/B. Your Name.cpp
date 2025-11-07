#include<bits/stdc++.h> 
using namespace std;


void solve () {
    int N;
    string a, b;
    cin >> N >> a >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    cout << (a == b ? "YES" : "NO") << endl;
}


int main () {
    int test;
    cin >> test;
    while (test--)
        solve();
}