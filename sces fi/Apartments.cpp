#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    int N , M , K;
    cin >> N >> M >> K;
    vector<int> applicant(N) , apartment(M);

    for (auto &a : applicant)
        cin >> a;
    for (auto &a : apartment)
        cin >> a;

    
    return 0;
}