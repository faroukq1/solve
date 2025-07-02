#include<bits/stdc++.h>
using namespace std;



void solve () {
    int64_t X, Y, N;
    cin >> X >> Y >> N;
    cout << (N - (N - Y) % X) << endl;
}


int main () {
    int test;
    cin >> test;
    while (test--)  
        solve();
}