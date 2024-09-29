#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int n , m;
    cin >> n >> m;
    queue< pair<int , int >> q;
    vector<int> arr(n);

    for (int i = 0 ; i < n ; i++) {
        cin >> arr[i];
        q.push({i + 1, arr[i]});
    }
    int last_child = -1;

    while (!q.empty()) {
        auto curr = q.front();
        q.pop();

        int index = curr.first;
        int remaining_candies = curr.second - m;
        if (remaining_candies > 0) 
            q.push({index , remaining_candies});
        

        last_child = index;
    }

    cout << last_child << endl;
}  
int main () {
    int tt = 1;
    // cin >> tt;
    while (tt--)
        solve();
    return 0;
}