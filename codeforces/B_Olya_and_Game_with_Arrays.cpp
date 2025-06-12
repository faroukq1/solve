#include<bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


// void run_case() {
//     int N;
//     cin >> N;
//     int mn = INT_MAX;
//     vector<int> second;
//     for (int i = 0; i < N; i++) {
//         int K;
//         cin >> K;
//         vector<int> A(K);
//         for (auto &a : A)
//             cin >> a;

//         sort(A.begin(), A.end());
//         mn = min(A.front(), mn);
//         second.push_back(A[1]);
//     }

//     long long ans = mn + accumulate(second.begin(), second.end(), 0LL) - *min_element(second.begin(), second.end());
//     cout << ans << endl;
// }

long long solve () {
    int N;
    cin >> N;
    int mn = INT_MAX;
    vector<int> second;
    for (int i = 0; i < N; i++) {
        int K;
        cin >> K;
        vector<int> A(K);
        for (auto &a : A)
            cin >> a;

        int min_A = *min_element(A.begin(), A.end());
        mn = min(mn, min_A);
        A.erase(find(A.begin(), A.end() , min_A));
        second.push_back(*min_element(A.begin(), A.end()));
    }

    return mn + accumulate(second.begin(), second.end(), 0) - *min_element(second.begin(), second.end());
}
int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests;
    cin >> tests;

    while (tests-- > 0) {
        // run_case();
        cout << solve() << endl;
    }
}