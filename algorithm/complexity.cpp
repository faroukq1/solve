#include <bits/stdc++.h>
using namespace std;
// The efficiency of algorithms is important in competitive programming.
// Usually, it is easy to design an algorithm that solves the problem slowly,
// but the real challenge is to invent a fast algorithm. If the algorithm is too
// slow, it will get only partial points or no points at all. The time
// complexity of an algorithm estimates how much time the algorithm will use for
// some input. The idea is to represent the efficiency as a function whose
// parameter is the size of the input. By calculating the time complexity, we
// can find out whether the algorithm is fast enough without implementing it.

// calculation rule (big O notation)

// 1 loops (time completxity of look is O of K && K is the number of nested
// loops)

void nestedLoops() {
  int N = 10;
  for (int i = 0; i < N; i++) {
    // code
    // complexity == O(N)
  }

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) {
      // code
      // complexity == O(N ** 2);
    }

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      for (int k = 0; k < N; k++) {
        // code
        // comlexity == O(N ** 3);
      }

  // some time the complexity depend on several variable
  int M = 10;
  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++) {
      // code
      // complexity == O(M * N)
    }
}

// complexity on recursion

// The time complexity of a recursive function depends on the number of times
// the function is called and the time complexity of a single call. The total
// time complexity is the product of these values.

void recursion(int n) {
  if (n == 1)
    return;
  f(n - 1);

  // there is single call so the complexity is O(N ** 1)
}

void second_recursion(int n) {
  if (n == 1)
    return;

  second_recursion(n - 1);
  second_recursion(n - 1);
  // there is double calls so the complexity is O(N ** 2)
}

// rule goes this way
// function call    number of calls
//      g(n)             1
//      g(n - 1)         2
//      g(n - 2)         4
//      ........         .
//      g(1)             2 ** (n - 1)

// based on this the time complexity is :
// 1 + 2 + 4 + .............. + 2 ** (n - 1) = O(2 ** n)

// Complexity classes
// The following list contains common time complexities of algorithms:
// O(1) The running time of a constant-time algorithm does not depend on the
// input size. A typical constant-time algorithm is a direct formula that
// calculates the answer.
// O(logn) A logarithmic algorithm often halves the input size at each step. The
// running time of such an algorithm is logarithmic, because log2 n equals the
// number of times n must be divided by 2 to get 1.
// O(
// p
// n) A square root algorithm is slower than O(logn) but faster than O(n).
// A special property of square roots is that p
// n = n/
// p
// n, so the square root p
// n
// lies, in some sense, in the middle of the input.
// O(n) A linear algorithm goes through the input a constant number of times.
// This is often the best possible time complexity, because it is usually
// necessary to access each input element at least once before reporting the
// answer. O(nlogn) This time complexity often indicates that the algorithm
// sorts the input, because the time complexity of efficient sorting algorithms
// is O(nlogn). Another possibility is that the algorithm uses a data structure
// where each operation takes O(logn) time. O(n
// 2
// ) A quadratic algorithm often contains two nested loops. It is possible to
// go through all pairs of the input elements in O(n
// 2
// ) time.
// O(n
// 3
// ) A cubic algorithm often contains three nested loops. It is possible to go
// through all triplets of the input elements in O(n
// 3
// ) time.
// O(2n
// ) This time complexity often indicates that the algorithm iterates through
// all subsets of the input elements. For example, the subsets of {1,2,3} are ;,
// {1}, {2}, {3}, {1,2}, {1,3}, {2,3} and {1,2,3}.
// O(n!) This time complexity often indicates that the algorithm iterates
// through all permutations of the input elements. For example, the permutations
// of {1,2,3} are (1,2,3), (1,3,2), (2,1,3), (2,3,1), (3,1,2) and (3,2,1).

// example solving problem

void max_subarray_sum_1(int arr[], int size) {
  int best = 0;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      int sum = 0;
      for (int a = i; a <= j; a++)
        sum = sum + arr[a];
      best = max(best, sum);
    }
  }

  cout << best << "\n";
  // complexity of O(N ** 3)
}

void max_subarray_sum_2(int arr[], int size) {
  int best = 0;
  for (int i = 0; i < size; i++) {
    int sum = 0;
    for (int j = i; j < size; j++) {
      sum = sum + arr[j];
      best = max(sum, best);
    }
  }
  cout << best << '\n';
  // complexity of O(N ** 2)
}
