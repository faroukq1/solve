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
    vector<int> arr(N + 1);

    for (int i = 1; i <= N ; i++)
        cin >> arr[i];

    for (int i = 1 ; i <= N ; i++) {
        int s = arr[i] , t = arr[s] , f = arr[t];
        map < int , int > diff;
        diff[s] = 1 , diff[t] = 1 , diff[f] = 1;

        if (diff.size() == 3 && i == f) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}