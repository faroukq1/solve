#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> nums;

  while (K != 0) {
    int temp = K % 10;
    nums.push_back(temp);
    K = K / 10;
  }
}
