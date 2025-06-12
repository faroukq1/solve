#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    int64_t N , M;
    cin >> N >> M;
    // the minimum moves to reach N
    int min_moves = (N + 1) / 2;

    while (min_moves % M != 0)
        min_moves++;

    
    if (min_moves <= N)
        cout << min_moves;
    else
        cout << -1;

    
    return 0;
}