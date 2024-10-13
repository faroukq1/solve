#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 10;

void solve() {
    vector<string> grid(N);
    for (auto &g : grid)
        cin >> g;
    
    int ans = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] == 'X') {
                int dist = min({i, N - 1 - i, j, N - 1 - j});
                ans += dist + 1;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
