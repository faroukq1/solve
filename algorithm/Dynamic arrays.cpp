#include <bits/stdc++.h>
using namespace std;

int main() {

  // dynamic array in c++ (vector)
  // declaration
  vector<int> v;
  v.push_back(3); // [3]
  v.push_back(2); // [3, 2]
  v.push_back(5); // [3, 2, 5]

  // eterate through vector
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << ' ';

  // shorter way to iterate through  a vector
  for (auto x : v)
    cout << x << ' ';
  // get the last element of the array
  int last = v.back();
  cout << last << ' '; // last element of v
  // pop the last element of the arr
  v.pop_back();
  // another way to  create vector with giving numbers
  vector<int> s(1, 2, 4, 5);
  //   The internal implementation of a vector uses an ordinary array. If the
  //   size of
  // the vector increases and the array becomes too small, a new array is
  // allocated and all the elements are moved to the new array. However, this
  // does not happen often and the average time complexity of push_back is O(1).
}