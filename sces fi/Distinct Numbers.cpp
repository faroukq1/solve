#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    long long N;
    cin >> N;
    set <long long> store;
    for (long long i = 0 , a ; i < N ; i++) {
        cin >> a;
        store.insert(a);
    }

    cout << store.size() << endl;
    return 0;
}