#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int64_t N;
    cin >> N;
    
    const int64_t sum = (N * (N + 1)) / 2;
    if (sum % 2 != 0) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    set<int64_t> seen;
    int64_t half = sum / 2;
    for (int64_t i = N; i >= 1; i--) {
        if (half - i >= 0) {
            seen.insert(i);
            half -= i;
        }

        if (half == 0)
            break;
    }

    cout << seen.size() << endl;
    for (auto &s : seen)
        cout << s << ' ';

    cout << endl;
    
    cout << N - seen.size() << endl;
    for (int64_t i = N; i >= 1; i--)
        if (seen.find(i) == seen.end())
            cout << i << ' ';

}

int main () {
    int test = 1;
    while (test--)  solve();
}