#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int64_t N;
    cin >> N;
    vector<int> arr(N);
    for (auto &a : arr) 
        cin >> a;


    int64_t steps = 0;
    for (int i = N - 2 ; i >= 0 ; i--) {
        while (arr[i] != 0 && arr[i] >= arr[i + 1]) {
            arr[i] /= 2;
            steps++;
        }

        if (arr[i] >= arr[i + 1]) {
            steps = -1;
            break;
        }
    }

    cout << steps << endl;
}


int main () {
    int tt;
    cin >> tt;
    while (tt--) solve();
    return 0;
}