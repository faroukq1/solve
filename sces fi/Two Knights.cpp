#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


int64_t fact (int64_t number) {
    if (number == 0)
        return 1;
    
    if (number == 1)
        return number;

    return number * fact(number - 1);
}

void solve () {
    int64_t N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        const int64_t nc2 = (pow(i, 4) - pow(i, 2)) / 2;
        const int64_t diff = 4 * (i - 2) * (i - 1);

        cout << nc2 - diff << endl;
    }
    
}

int main () {
    int test = 1;
    while (test--)  solve();
}