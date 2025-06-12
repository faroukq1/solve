#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (n % 2 == 0) {
            cout << (n + k - 2) / (k - 1) << '\n';
        } else {
            cout << 1 + (n - 2) / (k - 1) << '\n';
        }
    }
    return 0;
}