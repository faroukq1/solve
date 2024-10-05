#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve () {
    int A , B;
    cin >> A >> B;
    vector<int> arr(A + B);
    for (int i = 0 ; i < A ; i++)
        arr[i] = 1;
    for (int i = 0 ; i < B ; i++)
        arr[A + i] = 2;


    int diff = 0;
    for (int i = arr.size() - 1 ; i >= 0 ; i--)
        if (diff <= 0)
            diff += arr[i];
        else
            diff -= arr[i];

    cout << (diff == 0 ? "YES" : "NO") << endl;
}
int main () {
    int tt;
    cin >> tt;
    while (tt--) solve();
}