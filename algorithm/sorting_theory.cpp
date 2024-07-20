#include <bits/stdc++.h>
using namespace std;

// Sorting is a fundamental algorithm design problem. Many efficient algorithms
// use sorting as a subroutine, because it is often easier to process data if
// the elements are in a sorted order. For example, the problem ”does an array
// contain two equal elements?” is easy to solve using sorting. If the array
// contains two equal elements, they will be next to each other after sorting,
// so it is easy to find them. Also, the problem ”what is the most frequent
// element in an array?” can be solved similarly. There are many algorithms for
// sorting, and they are also good examples of how to apply different algorithm
// design techniques. The efficient general sorting algorithms work in O(nlogn)
// time, and many algorithms that use sorting as a subroutine also have this
// time complexity.

// sorting algorithm
// bubble sort (N ** 2)

void bubble_sort(int arr[], int size) {
  for (int i = 0; i < size; i++)
    for (int j = 0; j < n - 1; j++)
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);

  // display sortted array
  for (auto &a : arr)
    cout << a << ' ';
}

// and there is algorithm with N.log(N) complexity such heapsort mersge sort ..
// quicksort

// sorting in c++

// sort vector
vector<int> V = {3, 34, 5, 2, 22, 103, -9};
sort(V.begin(), V.end());

// sort C style array
int A[] = {1, 3, 4, 5, 55, 22, 10, -30};
int N = sizeof(A) / sizeof(A[0]);

sort(A, A + N);

// we can also sort string
// sorting string
string S = "farouk";
sort(S.begin(), S.end());

// compare sorting
// sometime we need to create such condition while sorting arr of something
// for example creating struct or pair --> to sort these type of data we need
// to create condtion
// example
vector<pair<int, int>> V = {{1, 3}, {22, 44}, {44, 44}, {1911, 23}};
// createing the condition
bool compare_pair(pair<int, int> &a, pair<int, int> &b) {
  return a.first > b.first;
  // sorting based on the first of the pair
}
// sorting
sort(V.begin(), V.end(), compare_pair);

// struct sort
struct Person {
  string name;
  string gender;
  double age;
} bool sorting_kids(const Person &p) {
  return p.age < 18;
}

vector<Person> PContainer = {{"farouk", "male", 22},
                             {"john doe", "male", "16"}};
sort(PContainer.begin(), PContainer.end(), sorting_kids);

// search in sorting array
// binary search ---> log(N)

void binary_search(vector<int> &a, int target) {
  int i = 0, j = a.size() - 1;
  while (i <= j) {
    int mid = (a + b) / 2;
    if (arr[mid] == target) {
      cout << arr[mid] << ' ' << mid;
      return 0;
    } else if (arr[mid] > target)
      i = mid + 1;
    else
      j = mid - 1;
  }
}

// lower_bound ==> return a pointer to the first array elemtn whose value is at
// least x
// upper_bound ==> return a pointer to the first array element whose value is
// large than x

vector<int> B = {3, 34, 5, 2, 22, 103, -9};
void exalain_lower_bound() {
  int x = 10;
  auto a = lower_bound(B.begin(), B.end(), x);
  if (a < B.size() && B[a] == x)
  // item found
}
// same for upper bound
