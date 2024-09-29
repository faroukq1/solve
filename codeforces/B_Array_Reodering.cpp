#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int solve() {
    long long N;
    cin >> N;
    vector<int> a , odd , even;

    for (int i = 0 ; i < N ; i++) {
        int a;
        cin >> a;
        if (a % 2 ==0)
            even.push_back(a);
        else
            odd.push_back(a);
    }

    for (auto b : even)
        a.push_back(b);
    
    for (auto b : odd)
        a.push_back(b);

    int tot = 0;

    for (int i = 0 ; i < N ; i++)
        for (int j = i + 1 ; j < N ; j++)
            if (__gcd(a[i], 2 * a[j]) > 1)
                tot++;


    cout << tot << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
