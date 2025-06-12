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
    vector<pair<long long , long long>> arr(N);

    for (long long i = 0 ; i < N; i++) {
        cin >> arr[i].first;
        arr[i].second = i;
    }

    sort(arr.begin(),arr.end());

    long long ans = 1;

    for (long long i = 0 ; i < N ; i++)
        if (arr[i].second < arr[i - 1].second)
            ans++;

    cout << ans << endl;
}

// 5 4 2 3 1
// 1 2 3 4 5
