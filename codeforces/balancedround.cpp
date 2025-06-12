#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void run_case() {
  int N , K;
  cin >> N >> K;
  vector<int> roundes(N);
  for (auto &round : roundes) cin >> round;

  if (N < 2) {
    cout << 0 << endl;
    return;
  }

  sort(roundes.begin(), roundes.end());
  int cpt = 1 , most = 1;
  for (int i = 0 ; i < N - 1; i++) {
    if (abs(roundes[i] - roundes[i + 1]) <= K) {
      cpt++;
    } else {
      most = max(most , cpt);
      cpt = 1;
    }
  }

  most = max(most , cpt);
  cout << N - most << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}
