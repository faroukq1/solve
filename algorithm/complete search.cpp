#include <bits/stdc++.h>
using namespace std;
// get sub arrays
void printSubArrays(vector<int> &arr, int start, int end) {
  for (int i = start; i <= end; i++)
    cout << arr[i] << ' ';
}

void generateSubArray(vector<int> &arr, int start, int end) {
  if (end == arr.size())
    return;

  else if (start > end)
    generateSubArray(arr, 0, end + 1);
  else {
    printSubArrays(arr, start, end);
    generateSubArray(arr, start + 1, end);
  }
}

int main() {
  // complete search
  // Complete search is a general method that can be used to solve almost any
  // algorithm problem. The idea is to generate all possible solutions to the
  // problem using brute force, and then select the best solution or count the
  // number of solutions, depending on the problem. Complete search is a good
  // technique if there is enough time to go through all the solutions, because
  // the search is usually easy to implement and it always gives the correct
  // answer. If complete search is too slow, other techniques, such as greedy
  // algorithms or dynamic programming, may be needed.
  vector<int> arr = {1, 2, 3, 5};
  // find 5 by brute force
  for (int i = 0; i < arr.size(); i++)
    if (arr[i] == 5)
      cout << "find";
  // eterate through the hole array
}