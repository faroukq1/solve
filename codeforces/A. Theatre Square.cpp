#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    long long N , M , X;
    cin >> N >> M >> X;
    long long height = M % X == 0 ? M / X : (M / X) + 1;
    long long width = N % X == 0 ? N / X : (N / X) + 1;
    cout << height * width << endl;
}