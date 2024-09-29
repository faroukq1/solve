#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  map<string, int> rectangles;
  rectangles["Tetrahedron"] = 4;
  rectangles["Cube"] = 6;
  rectangles["Octahedron"] = 8;
  rectangles["Dodecahedron"] = 12;
  rectangles["Icosahedron"] = 20;
  int N;
  cin >> N;
  vector<string> arr(N);
  for (auto &a : arr)
    cin >> a;

  int cpt = 0;
  for (auto a : arr)
    cpt += rectangles[a];

  cout << cpt << endl;
  return 0;
}