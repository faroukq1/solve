#include <iostream>
using namespace std;

void solve() {
    long t;
    cin >> t;

    while (t--) {
        long n, k, x;
        cin >> n >> k >> x;

        if (x != 1) {
            cout << "YES\n" << n << endl;
            for (long p = 0; p < n; p++) {
                cout << "1 ";
            }
            cout << endl;
        }
        else if (k >= 2 && n % 2 == 0) {
            cout << "YES\n" << n / 2 << endl;
            for (long p = 0; p < n / 2; p++) {
                cout << "2 ";
            }
            cout << endl;
        }
        else if (k >= 3) {
            cout << "YES\n" << n / 2 << endl;
            cout << "3 ";
            for (long p = 1; p < n / 2; p++) {
                cout << "2 ";
            }
            cout << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
