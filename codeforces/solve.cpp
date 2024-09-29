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

  sort(arr.begin(),arr.end());


  for (auto &a : arr)
    cout << a << ' ';

  cout << endl;
}


int main () {
    int tt;
    cin >> tt;
    while (tt--)
      solve();
    return 0;
}