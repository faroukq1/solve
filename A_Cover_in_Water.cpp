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
    set < int > seen;
}

int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}


/*
...
3 empty sell --> 3 is odd so we can do : int(3 / 2) + 1 ==> 2

##....#
4 empty sell --> 4 is even so we can do : int(4 / 2) ==> 2

..#.#..
we have 2 but not between 2 && N - 1 so : we have 2
cell between two rock : 1
we have 2 at the end so we have another 2
all we have is : 5


####
there is no empty rocks : 0

#...#..#.#
3 bewteen 2 rocks : 2
2 between 2 rocks : 2

*/