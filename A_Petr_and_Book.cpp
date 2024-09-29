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
    vector<int> arr(7);

    for (int i = 0 ; i < 7 ; i++)
        cin >> arr[i];


    int index = 0;
    while (N > 0) {
        N -= arr[index % 7];
        index++;
    }

    cout << (index % 7 != 0 ? index % 7 : 7);
    return 0;
}