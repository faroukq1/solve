#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif
    int N, test;
    string S;
    cin >> N >> test >> S;
    while (test--) {
        for (int i = 0; i < N - 1; i++)
            if (S[i] == 'B' && S[i + 1] == 'G') {
                swap(S[i], S[i + 1]);
                i++;
            }
    }
    cout << S << endl;
}