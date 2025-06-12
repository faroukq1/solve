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
    vector<int> arr = {0};

    for (int i = 0 ; i < M ; i++) {
        int a;
        cin >> a;
        arr.push_back(a);

        int ans = 0;
        sort(arr.begin(),arr.end());

        for (int i = 1 ; i < arr.size() ; i++)
            ans = max({ans , arr[i] , arr[i - 1]});
    
        cout << ans << ' ';
    }
    return 0;
}