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
    vector<int> arr(N);
    for (auto &a : arr)
        cin >> a;

    int max_segment = 1 ,  curr_segment = 1;
    for (int i = 0; i < N - 1 ; i++) {
        if (arr[i] <= arr[i + 1])
            curr_segment++;
        else {
            max_segment = max(curr_segment , max_segment);
            curr_segment = 1;
        }
    }

    cout << max(curr_segment , max_segment) << endl;
    return 0;
}