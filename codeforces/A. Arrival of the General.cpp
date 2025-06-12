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

    pair < int , int > tallest = {-1 , -1} , smallest = {10000 , 10000};
    for (int i = 0 ; i < N ; i++) {
        int curr = arr[i];
        if (curr > tallest.second) {
            tallest.first = i;
            tallest.second = curr;
        }

        if (curr <= smallest.second) {
            smallest.first = i;
            smallest.second = curr;
        }
    }

    cout << tallest.first + (N - 1 - smallest.first) - (smallest.first < tallest.first ? 1 : 0) << endl;
}