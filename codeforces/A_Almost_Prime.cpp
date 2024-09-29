#include <bits/stdc++.h>
using namespace std;

const int MXN = 3005;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;

  vector<bool> is_prime(N + 1, true);
  is_prime[0] = is_prime[1] = false;

  for (int i = 2; i * i <= N; i++) {
    if (is_prime[i]) {
      for (int j = i * i; j <= N; j += i) {
        is_prime[j] = false;
      }
    }
  }

  int almost_prime_count = 0;

  for (int i = 2; i <= N; i++) {
    int distinct_prime_factors = 0;
    int num = i;

    for (int j = 2; j <= num; j++) {
      if (is_prime[j] && num % j == 0) {
        distinct_prime_factors++;
        while (num % j == 0) {
          num /= j;
        }
      }
    }

    if (distinct_prime_factors == 2) {
      almost_prime_count++;
    }
  }

  cout << almost_prime_count << endl;

  return 0;
}
