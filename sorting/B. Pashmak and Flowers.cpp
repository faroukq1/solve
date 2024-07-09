#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> arr(N);
  for (int i = 0; i < N; i++)
    cin >> arr[i];

  sort(arr.begin(), arr.end());

  int low = arr[0], high = arr[arr.size() - 1];
  int numOfLow = count(arr.begin(), arr.end(), low);
  int numOfHigh = count(arr.begin(), arr.end(), high);

  long long combine;
  if (low == high) {
    combine = (long long)N * (N - 1) / 2;
  } else {
    combine = (long long)numOfLow * numOfHigh;
  }

  cout << high - low << ' ' << combine << endl;

  return 0;
}
