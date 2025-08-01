#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int factorial(int n) {
    int res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}
void solve() {
    string S;
    cin >> S;
    map<char, int> store;
    for (auto &s : S)
        store[s]++;

    int64_t second = 1;
    int64_t first = factorial(S.length());
    for (auto s : store)
        second *= factorial(s.second);

    int64_t total = first / second;
    cout << total << endl;
    sort(S.begin(), S.end());
    do {
        cout << S << endl;
    } while (next_permutation(S.begin(), S.end()));

}

int main() {
    int test = 1;
    // cin >> test;
    while (test--) solve();
}
