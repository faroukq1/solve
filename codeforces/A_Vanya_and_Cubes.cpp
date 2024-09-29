#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  int height = 0;
  int cubes_used = 0;
  int current_level = 1;

  while (true) {
    int cubes_needed_for_current_level =
        (current_level * (current_level + 1)) / 2;
    if (cubes_used + cubes_needed_for_current_level > N) {
      break;
    }
    cubes_used += cubes_needed_for_current_level;
    height++;
    current_level++;
  }

  cout << height << endl;
  return 0;
}
