#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, a, b;
    cin >> x >> y >> a >> b;

    // Ensure x is the larger number, so we don't deal with negative differences
    if (x < y) swap(x, y);
    
    // Case 1: Use single operations to equalize the difference between x and y
    long long first_cost = (x - y) * a;

    // Case 2: Use either b or two single operations for the remaining y steps
    long long second_cost = min(2 * a, b) * y;

    cout << first_cost + second_cost << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
