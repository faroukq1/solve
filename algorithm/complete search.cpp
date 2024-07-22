#include <bits/stdc++.h>
using namespace std;
// get sub arrays
void getSubArray(vector<int> &arr, int start, int end) {
  if (start > end)
    return;
  // print subarray
  for (int i = start; i <= end; i++)
    cout << arr[i] << ' ' << "\n";

  getSubArray(arr, start + 1, end);
  getSubArray(arr, start, end - 1);
}
// get perimutation
void getPermutation(vector<int> &arr, int start) {
  if (start == arr.size() - 1)
    for (auto &a : arr)
      cout << a << ' ' << '\n';

  // Recursive case: swap current element with each element that comes after it
  for (int i = start; i < arr.size(); i++) {
    // Swap elements
    swap(arr[start], arr[i]);

    // Recurse on the rest of the array
    generatePermutationsRecursive(arr, start + 1);

    // Backtrack: undo the swap
    swap(arr[start], arr[i]);
  }
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