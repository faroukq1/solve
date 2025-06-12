#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (auto &a : arr)
        cin >> a;

    int mx = arr[0];

    cout << mx << ' ';

    for (int i = 1; i < N ; i++) {
        arr[i] += mx;
        cout << arr[i] << ' ';

        mx = max(arr[i] , mx);
    }
    return 0;
}