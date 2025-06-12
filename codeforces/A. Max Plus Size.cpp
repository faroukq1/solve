#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve() {
    int N;
    cin >> N;

    int first = 0, second = 0;
    int first_size = 0, second_size = 0;

    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;

        if (i % 2 == 0) {
            first = max(first, a);
            first_size++;
        } else {
            second = max(second, a);
            second_size++;
        }
    }

    cout << max(first + first_size, second + second_size) << endl;
}

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
