#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> arr(N);

  for (auto &a : arr)
    cin >> a;

  sort(arr.begin(), arr.end());

  int low = arr[0], high = arr[arr.size() - 1];
  int minCount = count(arr.begin(), arr.end(), low);
  int maxCount = count(arr.begin(), arr.end(), high);

  long long combine;

  if (low == high) {
    combine = (long long)N * (N - 1) / 2;
  } else {
    combine = (long long)minCount * maxCount;
  }

  cout << high - low << ' ' << combine << endl;
}
