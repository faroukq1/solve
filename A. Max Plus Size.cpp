#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void solve () {
    int N;
    cin >> N;
    vector<int> arr(N);

    for (auto &a : arr)
        cin >> a;

    
    vector<int> A , B;

    for (int i = 0 ; i < N ; i++)
        if (i % 2 == 0)
            A.push_back(arr[i]);
        else
            B.push_back(arr[i]);


    int max_A = *max_element(A.begin(),A.end());
    int max_B = *max_element(B.begin(),B.end());


    if (max_A >= max_B) 
        cout << max_A + A.size();
    else
        cout << max_B + B.size();

    cout << endl;

}
int main () {
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}