#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    int N , M;
    cin >> N >> M;

    set < pair < int , int >> store;

    vector<int> A(N) , B(M);

    for (int i = 0 ; i < N ; i++) {
        cin >> A[i];
        store.insert({A[i] , i});
    } 

    for (auto &b : B)
        cin >> b;

    
    for (int i = 0 ; i < M ; i++) {
        auto match = store.lower_bound({B[i] + 1 , 0});

        if (match == store.begin())
            cout << -1 << endl;
        else {
            match--;
            cout << match->first << endl;
            store.erase(match);
        }
    }
    return 0;
}