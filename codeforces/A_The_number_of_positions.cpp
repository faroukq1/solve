#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    int n , a , b;
    cin >> n >> a >> b;
    if ((n - a) > (b + 1))
        cout << b + 1 << endl;
    else
        cout << n - a << endl;
    return 0;
}

// 1 2 3
// 1 2 3 4 5