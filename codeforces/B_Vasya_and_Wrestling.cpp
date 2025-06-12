#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int N;
    cin >> N;
    vector<int64_t> first, second;
    int64_t  first_sum = 0, second_sum = 0;
    bool last_is_first = true;
    for (int i = 0; i < N; i++) {
        int64_t a;
        cin >> a;
        if (a > 0) {
            first.push_back(a);
            first_sum += a;
        } else {
            second.push_back(-a);
            second_sum += (-a);
        }

        if (i == N - 1) last_is_first = (a > 0);
    }

    // check if the sum of a greater than the sum of b
    if (first_sum != second_sum)
        return void(cout << (first_sum > second_sum ? "first" : "second") << endl);
    // second lexicographically greater
    for (int i = 0; i < min(first.size(), second.size()); i++)
        if (first[i] > second[i])
            return void(cout << "first" << endl);
        else if (first[i] < second[i])
            return void(cout << "second" << endl);

    return void(cout << (last_is_first ? "first" : "second") << endl);   
}
int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests = 1;

    while (tests-- > 0)
        solve();
}