#include <bits/stdc++.h>
using namespace std;

int64_t get_distance(int64_t x1, int64_t y1, int64_t x2, int64_t y2) {
    int64_t dx = x2 - x1;
    int64_t dy = y2 - y1;
    return dx * dx + dy * dy;
}

void run_case() {
    int64_t N;
    cin >> N;
    vector<int64_t> X(N), Y(N);
    
    for (auto &x : X) cin >> x;
    for (auto &y : Y) cin >> y;

    int64_t ans = 0;
    for (int i = 0; i < N; i++)
        for (int j = i + 1; j < N; j++) ans = max(ans, get_distance(X[i], Y[i], X[j], Y[j]));

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    run_case();
}
