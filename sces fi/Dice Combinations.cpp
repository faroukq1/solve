#include <iostream>
#include <vector>
using namespace std;


long long countWaysUtil(long long n, vector<long long>& memo) {
    // Base cases
    if (n == 0) return 1; 
    if (n < 0) return 0; 

    if (memo[n] != -1) return memo[n];

    memo[n] = 0;
    for (long long i = 1; i <= 6; ++i) {
        memo[n] += countWaysUtil(n - i, memo);
    }
    
    return memo[n];
}

long long countWays(long long n) {
    vector<long long> memo(n + 1, -1);
    return countWaysUtil(n, memo);
}


long long MOD = 10e9 + 7;
int main() {
    long long n;
    cin >> n;
    cout << countWays(n) % MOD;
    return 0;
}
