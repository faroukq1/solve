#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> laptops;
  while (N--) {
    int a, b;
    cin >> a >> b;
    laptops.push_back({a, b});
  }

  auto compare = [&](pair<int, int> &a, pair<int, int> &b) -> bool {
    return a.second > b.second;
  };

  sort(laptops.begin(), laptops.end(), compare);

  for (int i = 0; i < laptops.size() - 1; i++) {
    int price1 = laptops[i].first, price2 = laptops[i + 1].first,
        quality1 = laptops[i].second, quality2 = laptops[i + 1].second;

    if (price1 < price2 && quality1 > quality2) {
      cout << "Happy Alex";
      return 0;
    }
  }

  cout << "Poor Alex";
}