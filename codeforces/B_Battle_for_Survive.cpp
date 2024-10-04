#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    long long N , sum = 0 , second_last , last;
    cin >> N;
    vector<long long> arr(N);

    for (int i = 0 ; i < N - 2 ; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cin >> second_last;
    second_last -= sum;
    cin >> last;

    last -= second_last;

    cout << last << endl;

}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}