#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


// this work !
void run_case() {
    // solving
    int N, R, B;
    cin >> N >> R >> B;
    const int P = R / (B + 1), Q = R % (B + 1);

    for (int i = 0; i < Q; i++)
        cout << string(P + 1, 'R') << 'B';

    for (int i = Q; i < B; i++)
        cout << string(P , 'R') << 'B';

    cout << string(P, 'R');
    cout << endl;
}


// solve
void solve () {
    int N, R, B;
    cin >> N >> R >> B;

    int number_of_reds = R / (B + 1);
    int reminder = R % (B + 1);

    for (int i = 0; i < B; i++) {
        for (int j = 0; j < number_of_reds; j++)
            cout << 'R';

        if (reminder) {
            cout << 'B';
            reminder--;
        }

        cout << 'B';
    }

    for (int i = 0; i < number_of_reds; i++)
        cout << 'R';

    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests;
    cin >> tests;

    while (tests-- > 0)
        solve();
}