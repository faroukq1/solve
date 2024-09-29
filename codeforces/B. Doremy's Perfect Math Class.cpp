#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve () {
    int N , ans = 0;
    cin >> N;
    vector<int> arr(N);
    for (auto &a : arr)
        cin >> a;

    if (N == 1) {
        cout << 1 << endl;
        return;
    }

    int g = arr[1] - arr[0];
    for (int i = 2 ; i < N ; i++)
        g = __gcd(g , arr[i] - arr[i - 1]);

    int max_possible_size= (arr.back() - arr[0]) / g + 1;

    cout << max_possible_size << endl;
}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}