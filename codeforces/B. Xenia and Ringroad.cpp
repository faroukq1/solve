#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    long long N , M;
    cin >> N >> M;

    long long ans = 0 , house = 1;
    for (long long i = 0 ; i <= M ; i++) {
        long long task;
        cin >> task;

        if (task >= house)
            ans += task - house;
        else
            ans += (N - house) + task;

        house = task; 
    }

    cout << ans << endl;
    return 0;
}