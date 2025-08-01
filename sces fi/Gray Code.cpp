#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int gray_code(int n) {
    return n ^ (n >> 1);
}

void solve() {
    int N;
    cin >> N;
    int total = 1 << N;
    for (int i = 0; i < total; i++) {
        int g = gray_code(i);
        string binary = bitset<32>(g).to_string();
        cout << binary.substr(32 - N) << endl;
    }
}

int main() {
    int test = 1;
    // cin >> test;
    while (test--) solve();
}
