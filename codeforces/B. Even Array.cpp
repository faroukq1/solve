#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


bool similar_parity(int a, int b) {
    return (a % 2) == (b % 2);
}


void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    int type_a = 0, type_b = 0; 
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (i % 2 == 0 && A[i] % 2 != 0) type_a++;
        else if (i % 2 != 0 && A[i] % 2 == 0) type_b++;
    }
    cout << (type_a != type_b ? -1 : type_a) << endl;
}


int main () {
  int test;
  cin >> test;
  while (test--)
    solve();
}