#include<bits/stdc++.h>
using namespace std;






int main() {
  int N;
  cin >> N;

  vector<int> arr(N), remove;

  for (auto &a : arr)
    cin >> a;

  sort(arr.begin(),arr.end());

  set <int> seen;

  for (int i = 0 ; i < N ; i++) {
    auto isHere = seen.find(arr[i]);
    if (isHere == seen.end()) {
      remove.push_back(arr[i]);
      seen.insert(arr[i]);
    }
  }

  for (auto &a : remove)
    cout << a << ' ';
} 
