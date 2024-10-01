#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve() {
    int N, M;
    cin >> N >> M;
    vector<int> arr(N + 1);

    for (int i = 1; i <= N; i++)
        cin >> arr[i];

    set<pair<int, int>> store;

    for (int i = 1; i <= N; i++)
        store.insert({arr[i], i});

    while (!store.empty()) {
        auto last = prev(store.end()); 

        if (last->first == -1) {
            store.erase(last);
            continue;
        }
        
        int value = last->first;
        int idx = last->second;

        if (value - M <= 0) {
            cout << idx << ' ';
            store.erase(last);
        } else {
            store.erase(last); 
            store.insert({value - M, idx}); 
        }
    }

    cout << endl;
}

int main() {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}
