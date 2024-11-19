#include<bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

unordered_map<int, bool> seen;

pair<int, int> findTwoMultiples(vector<int>& nums, int target) {
    seen.clear();
    for (int num : nums) {
        if (num != 0 && target % num == 0) {
            int complement = target / num;
            if (seen[complement]) {
                return {num, complement};
            }
        }
        seen[num] = true;
    }
    return {-1, -1};
}

void run_case() {
    int N;
    cin >> N;
    int want = N - 2;
    vector<int> lines(N);
    for (auto& a : lines)
        cin >> a;

    pair<int, int> ans = findTwoMultiples(lines, want);
    cout << ans.first << ' ' << ans.second << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();

    return 0;
}
