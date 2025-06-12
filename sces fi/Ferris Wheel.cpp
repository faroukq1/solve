#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    long long N , X;
    cin >> N >> X;

    vector<long long> weights(N);
    for (auto &a : weights)
        cin >> a;

    sort(weights.begin(),weights.end());

    // 7 2 3 9
    // 2 3 7 9
    // (2 3) (7) (9)

    long long start = 0 , end = N - 1 , ans = 0;
    while (start < end) {
        if (weights[start] + weights[end] <= X)
            start++;

        end--;
        ans++;
    }

    cout << ans + (start == end) << endl;
    return 0;
}