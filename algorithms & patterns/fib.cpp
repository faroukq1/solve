#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    // generate fib numbers
    /*
    to generate a number from f fib sequence
    it's simple as get the same of the previous two element
    for example
    fib start with 1 and 1
    so the thrid element will be 2
    and the forth element will be 3 because the prev is 2 and 1
    1 1 2 3 5 8 .... fib(n - 1) fib(n)
     */


    // this is the recursion solution
    auto fib = [&] (int number) -> int64_t {
        if (n <= 2)
            return 1; // the trivial case

        return fib(number - 1) + fib(number - 2);
    };

    cout << fib(7) << ' '; 

    /*
                    fib(7)
                   /      \
              fib(6)      fib(5)
             /     \      /     \
        fib(5)   fib(4) fib(4)  fib(3)
       /   \     /  \    /  \    /  \
   fib(4)  fib(3) fib(3) fib(2) fib(3) fib(2)
    /  \     /  \    / \    / \    / \    / \
fib(3) fib(2) fib(2) fib(1) fib(2) fib(1)
  /  \     /  \      / \     / \
fib(2) fib(1) fib(1) fib(0) fib(1) fib(0)
  /  \
fib(1) fib(0)


*/

// type complexity is O(2 ** N) because on every level it mult by 2
// so on the n level it will bil 2 ** N
// space complexity is ==> N
}