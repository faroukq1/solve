#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve () {
    int N;
    cin >> N;
    char arr[N][4];
    for (int i = 0 ; i < N ; i++)
        for (int j = 0 ; j < 4 ; j++)
            cin >> arr[i][j];

    for (int i = N - 1 ; i>= 0 ; i--)
        for (int j = 0 ; j < 4 ; j++)
            if (arr[i][j] == '#')
                cout << j + 1 << ' ';
    cout << endl;
}



int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}