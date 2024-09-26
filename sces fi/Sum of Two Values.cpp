#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    map<int, int> store; 
    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        if (store.find(complement) != store.end()) {
            cout << store[complement] + 1 << ' ' << i + 1 << endl;  // +1 for 1-based index
            return 0;
        }
        store[arr[i]] = i;  
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
