#include <iostream>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <numeric>
#include <random>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
#include <limits>
#include <string>
#include <limits.h>

using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int dx[4] = {-1, 1, -1, 1}; 
const int dy[4] = {-1, -1, 1, 1};


void solve () {
  int a , b;
  cin >> a >> b;
  int x1 , y1 , x2 , y2;
  cin >> x1 >> y1 >> x2 >> y2;
  set <pair < int , int >> st1 , st2;

  for (int j = 0 ; j < 4 ; j++) {
    st1.insert({x1+dx[j]*a, y1+dy[j]*b});
    st2.insert({x2+dx[j]*a, y2+dy[j]*b});
    st1.insert({x1+dx[j]*b, y1+dy[j]*a});
    st2.insert({x2+dx[j]*b, y2+dy[j]*a});
  }

  int ans = 0;

  for (auto x : st1)
    if (st2.find(x) != st2.end()) ans++;

  cout << ans << '\n'; 
}
int main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
      solve();
    return 0;
}