#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


map <int, int> memorization;
int fibonacci (int N) {
    if (N <= 2)
        return 1;

    if (memorization.find(N) != memorization.end())
        return memorization[N];

    memorization[N] = fibonacci(N - 1) + fibonacci(N - 2);
    return memorization[N];
}
// memorisation
/*
    the key is to use fast data structure
    to remember the deblicate subtree
    for example in fib when we call 8 there is 
    deblicate subtree like fib(5) there is 2 of them

    hash map will be good to store the deblicates
*/

map < int , int > store;

int64_t fib_memorisation (int64_t num , map < int , int > &memo) {
    // base case to find the deblicate
    if (memo.find(num) != memo.end())
        return memo[num];

    // this means if we already calculate the nums we can
    // fast access to it value by the map


    // base case
    if (num <= 2)
        return 1;

    memo[num] = fib_memorisation(num - 1 , memo) + fib_memorisation(num - 2 , memo);
    
    return memo[num];
}

int main () {
    int N;
    cin >> N;

    assert(N >= 0);

    for (int i = 1 ; i <= N ; i++)
        cout << fib_memorisation(i , store) << endl;

    /*
    the time complexity
    the new tree will be like this

        
                        fib(7)
                        /  
                    fib(6)      
                    /      
                fib(5)  
                /       
            fib(4)  
            /      
        fib(3)
        /     
    fib(2)
        /  \
    fib(1) fib(0)


    so the complexity is 2 * N and the notation is  will be O(N)

    */

}