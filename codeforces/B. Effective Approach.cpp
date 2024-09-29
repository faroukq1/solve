#include <bits/stdc++.h>
using namespace std;

vector<int> arr(100001);

int main() {
  int N;
  long long start = 0, end = 0;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int temp;
    cin >> temp;
    arr[temp] = i + 1;
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int value;
    cin >> value;
    start = start + arr[value];
    end = end + (N - arr[value] + 1);
  }

  cout << start << " " << end;
}