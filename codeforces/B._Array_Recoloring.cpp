#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (auto &Element : A) {
        cin >> Element;
    }
    sort(A.rbegin(), A.rend());
    int Total = accumulate(A.begin(), A.begin() + K + 1, 0);
    cout << Total << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T-- > 0) {
        run_case();
    }
}