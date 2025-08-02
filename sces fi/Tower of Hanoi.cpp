#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)



vector<pair<int, int>> moves;
void solve (int N, int from, int to) {
  if (N == 0) return;

  int other = 6 - from - to;
  solve(N - 1, from, other);
  moves.emplace_back(from, to);
  solve(N - 1, other, to);
}

int main () {
    int N;
    cin >> N;
    solve(N, 1, 3);
    cout << moves.size() << endl;
    for (auto &m : moves)
      cout << m.first << ' ' << m.second << endl;
}