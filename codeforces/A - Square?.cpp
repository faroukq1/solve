#include<bits/stdc++.h> 
using namespace std;


int MAX_SIZE = 4;


void solve () {
    set<int> numbers;
    for (int i = 0, a; i < MAX_SIZE; i++) {
        cin >> a;
        numbers.insert(a);
    }
    bool valid = numbers.size() == 1;
    cout << (valid ? "YES" : "NO") << endl;
}


int main () {
    int test;
    cin >> test;
    while (test--)
        solve();
}