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

    sort(arr.begin(),arr.end());

    long long ans = 0;

    for (long long i = 0 ; i < N; i++)
        if (ans + 1 < arr[i])
            break;
        else
            ans += arr[i];

    cout << ans + 1<< endl;
    return 0;
}