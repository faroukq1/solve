#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve () {
    int N , M , Q , ans = 0;
    cin >> N >> M >> Q;
    multiset < int > teacher;
    for (int i = 0 ; i < M ; i++) {
        int a;
        cin >> a;
        teacher.insert(a);
    }
    int david;
    while (Q--)
        cin >> david;


    int left_teacher , right_teacher;

    
    cout << right_teacher << ' ' << left_teacher << endl;

}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}