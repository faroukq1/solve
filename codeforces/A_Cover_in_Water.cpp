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
     int N;
     cin >> N;
     vector<char> arr(N);

     for (auto &c : arr)
          cin >> c;

     for (int i = 0 ; i < N - 2 ; i++)
          if (arr[i] == '.' && arr[i + 1] == '.' && arr[i + 2] == '.') {
               cout << 2 << endl;
               return;
          }

     int cpt = 0;

     for (int i = 0 ; i < N ; i++)
          if (arr[i] == '.')
               cpt++;

     cout << cpt << endl;
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