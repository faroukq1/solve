#include <bits/stdc++.h>
using namespace std;

int main() {
  long long N, K;
  cin >> N >> K;

  vector<long long> prices(N);
  for (auto &a : prices)
    cin >> a;
  sort(prices.begin(), prices.end());

  vector<long long> prefix_sum(N + 1, 0);

  for (long long i = 1; i <= N; i++)
    prefix_sum[i] = prefix_sum[i - 1] + prices[i - 1];

  while (K--) {
    long long x, y;
    cin >> x >> y;
    long long res = prefix_sum[N - x + y] - prefix_sum[N - x];
    cout << res << "\n";
  }
}
