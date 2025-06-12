#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    int N;
    cin >> N;
    map <int , int> store;

    for (int i = 0 ; i < N ; i++) {
        int a;
        cin >> a;
        store[a]++;
    }

    int mx = -1;

    for (auto &a : store)
        mx = max(mx , a.second);

    cout << mx << ' ' << store.size();
    return 0;
}