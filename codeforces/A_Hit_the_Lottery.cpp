#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    vector<int> money = {1, 5 , 10 , 20 , 100};
    int N;
    cin >> N;
    int i = 4 , ans = 0;
    while (N > 0)  {
        if (N - money[i] >= 0) {
            N -= money[i];
            ans++;
        } else
            i--;
    }
    cout << ans << endl;
}