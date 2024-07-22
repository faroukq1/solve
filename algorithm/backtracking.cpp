#include <bits/stdc++.h>
using namespace std;

// A backtracking algorithm begins with an empty solution and extends the
// solution step by step. The search recursively goes through all different ways
// how a solution can be constructed. As an example, consider the problem of
// calculating the number of ways n queens can be placed on an n× n chessboard
// so that no two queens attack each other. For example, when n = 4

int n = 10, count = 0; // board size

void search(int y) {
  if (y == n) {
    count++;
    return;
  }

  for (int i = 0; i < n; i++) {
    if (column[x] || diag1[x + y] || diag2[x - y + n - 1])
      continue;

    column[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
    search(y + 1);
    column[x] = daig1[x + y] = diag2[x - y + n - 1] = 0
  }
}
int main() {}