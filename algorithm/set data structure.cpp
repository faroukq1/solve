#include <bits/stdc++.h>
using namespace std;
// A set is a data structure that maintains a collection of elements. The basic
// operations of sets are element insertion, search and removal.
// The C++ standard library contains two set implementations: The structure
// set is based on a balanced binary tree and its operations work in O(logn)
// time. The structure unordered_set uses hashing, and its operations work in
// O(1) time on average. The choice of which set implementation to use is often
// a matter of taste. The benefit of the set structure is that it maintains the
// order of the elements and provides functions that are not available in
// unordered_set. On the other hand, unordered_set can be more efficient. The
// following code creates a set that contains integers, and shows some of the
// operations. The function insert adds an element to the set, the function
// count returns the number of occurrences of an element in the set, and the
// function erase removes an element from the set.
int main() {
  // declaration
  // set  < data type > name;
  set<int> s;
  // insert into set
  s.insert(3);
  s.insert(5);
  s.insert(5);
  cout << s.count(3);  // 1;
  cout << s.count(10); // 0;
  // get size
  cout << s.size();
  // eterate through set
  // simple way
  for (auto it = s.begin(); it != s.end(); it++)
    cout << *it << ' ';
  // shorter way
  for (auto x : s)
    cout << x << " ";
  // An important property of sets is that all their elements are distinct.
  // Thus,
  //  the function count always returns either 0 (the element is not in the set)
  //  or 1 (the element is in the set), and the function insert never adds an
  //  element to the set if it is already there
  //   C++ also contains the structures multiset and unordered_multiset that
  //   otherwise work like set and unordered_set but they can contain multiple
  //   instances of
  // an element. For example, in the following code all three instances of the
  // number 5 are added to a multiset
  multiset<int> mulSet;
  for (int i = 0; i < 10; i++)
    mulSet.inset(1);

  cout << mulSet.count(1); // 10;
}