#include <cmath>
#include <iostream>
using namespace std;

void solve() {
  int a, b;
  int xK, yK, xQ, yQ;

  cin >> a >> b;
  cin >> xK >> yK;
  cin >> xQ >> yQ;

  int moves[8][2] = {{a, b}, {a, -b}, {-a, b}, {-a, -b},
                     {b, a}, {b, -a}, {-b, a}, {-b, -a}};

  int count = 0;

  for (int i = 0; i < 8; i++) {
    int knight_x = xK + moves[i][0];
    int knight_y = yK + moves[i][1];

    if ((abs(knight_x - xQ) == a && abs(knight_y - yQ) == b) ||
        (abs(knight_x - xQ) == b && abs(knight_y - yQ) == a)) {
      count++;
    }
  }

  cout << count << endl;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
