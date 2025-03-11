#include<bits/stdc++.h>
using namespace std;

const int BREAK_IT = 10000;
void run_case() {
    int x;
    cin >> x;
    
    if (x == 0)
        return void(cout << -1 << endl);
    
    int i = 1;
    while (i <= x) {
        bool valid = (x + i > (x ^ i)) &&  (x + (x ^ i) > i) && (i + (x ^ i) > x);
        if (valid)
            return void(cout << i << endl);
        
        i++;
        
        if (i > BREAK_IT) break;
    }
    
    return void(cout << -1 << endl);
}

int main () {
    int test;
    cin >> test;
    while (test--)
        run_case();
}