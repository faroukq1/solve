#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int mx = 200005;

void run_case() {
    string s;
    cin >> s;
    const int len = int(s.length());
    
    vector<int> A(mx, 0);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        A[a]++;
        A[len - a + 2]++;
    }

    for (int i = 1; i <= len / 2; i++) {
        A[i] += A[i - 1];
        if (A[i] % 2 != 0)
            swap(s[i - 1], s[len - i]);
    }
    return void(cout << s << endl);
}


int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests = 1;

    while (tests-- > 0)
        run_case();
}