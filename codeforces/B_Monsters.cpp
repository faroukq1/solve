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
    vector<int> arr(N);
    for (int i = 0 ; i < N ; i++)
        cin >> arr[i];

    vector<pair<int , int>> hMap;

    for (int i = 0 ; i < N ; i++) {
        long long res = arr[i] % M;
        if (res == 0)
            res += M;

        hMap.push_back({-res , i});
    }

    sort(hMap.begin(),hMap.end());

    for (auto & a : hMap)
        cout << a.second + 1 << ' ';

    cout << endl;
}

int main() {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}
