#include<bits/stdc++.h>
using namespace std;






int main() {
  int N;
  cin >> N;

  vector<int> arr(N) , solve;

  for (int i = 0 ; i < N  ; i++)
      cin >> arr[i];

  set<int> seen;

  for (int i = 0 ; i < N ; i++) {
    auto find = seen.find(arr[i]);
    if (find == seen.end()) {
      solve.push_back(arr[i]);
      seen.insert(arr[i]);
      
    }
  }
  for (int i = 0 ;i < solve.size() ;i++) {
    cout << solve[i];
  }
} 
