#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    long long N;
    cin >> N;
    vector<long long> arr(N);
    for (auto &a : arr)
        cin >> a;


    long long res = arr[0];
    long long max_ending = arr[0];

    for (int i = 1; i < N ; i++) {
        max_ending = max(max_ending + arr[i], arr[i]);

        res = max(res , max_ending);
    }

    cout << res << endl;
    // Kadane’s Algorithm
}