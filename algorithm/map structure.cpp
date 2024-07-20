#include <bits/stdc++.h>
using namespace std;

int main() {
  //     A map is a generalized array that consists of key-value-pairs. While
  //     the keys in
  // an ordinary array are always the consecutive integers 0,1,...,n−1, where n
  // is the size of the array, the keys in a map can be of any data type and
  // they do not have to be consecutive values. The C++ standard library
  // contains two map implementations that correspond to the set
  // implementations: the structure map is based on a balanced binary tree and
  // accessing elements takes O(logn) time, while the structure unordered_map
  // uses hashing and accessing elements takes O(1) time on average.
  // declaration
  map<string, int> m; // map that the key is string and the value is integer

  m["one"] = 1;
  m["two"] = 2;
  m["three"] = 3;
  cout << m["one"] << " "; // 1
  //     If the value of a key is requested but the map does not contain it, the
  //     key
  // is automatically added to the map with a default value. For example, in the
  // following code, the key four with value 0 is added to the map
  cout << m["four"]; // 0 and four is added to the map
  // check if key is exist in the map
  if (m.count("one"))
    cout << "exist";
  else
    cout << "there is no item with that key";

  // traverse mpa in c++
  for (auto it = m.begin(); it != m.end(); it++)
    cout << it->first << ' ' << it->second
         << ' '; // first is the key and second is the value of the key

  // shortest way
  for (auto x : m)
    cout << x.first << ' ' << x.second;

  // find element using iterator
  auto it = m.find("one");
  if (it != m.end())
    cout << "item found" << it->second;
}