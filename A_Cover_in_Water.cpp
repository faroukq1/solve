#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int N , ans = 0;
    cin >> N;
    int rock = 0 , empty = 0;
    for (int i = 0 ; i < N ; i++) {
        bool in_segment = i >= 2 && i <= N - 1;
        char a;
        cin >> a;
        if (a == '#')
            rock++;
        else
            empty++;
        
        if (rock >= 2) {
            if (in_segment)
                ans += (empty / 2);
            else
                ans += empty;
            empty = 0;
        }
    }

    cout << rock << ' ' << empty << endl;
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