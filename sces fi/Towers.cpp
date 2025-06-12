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
    vector<pair<int , int>> A(N);

    for (int i = 0 ; i < N ; i++) {
        cin >> A[i].first;
        A[i].second = i;
    }

    int cpt = 0;
    set <pair<int , int >> S;

    for (int i = 0 ; i < N ; i++) {
        set <pair<int , int >>::iterator it = S.upper_bound(A[i]);
        if (it != S.end())
            S.erase(it);
        else
            cpt++;

        S.insert(A[i]);
    }

    cout << cpt << endl;
}

// 3 8 2 1 5
// 3 2 1 
// 8 5