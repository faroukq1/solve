#include <bits/stdc++.h>
using namespace std;

// A greedy algorithm constructs a solution to the problem by always making a
// choice that looks the best at the moment. A greedy algorithm never takes back
// its choices, but directly constructs the final solution. For this reason,
// greedy algorithms are usually very efficient. The difficulty in designing
// greedy algorithms is to find a greedy strategy that always produces an
// optimal solution to the problem. The locally optimal choices in a greedy
// algorithm should also be globally optimal. It is often difficult to argue
// that a greedy algorithm works.

// example coin problem

// As a first example, we consider a problem where we are given a set of coins
// and our task is to form a sum of money n using the coins. The values of the
// coins are coins = {c1, c2,..., ck}, and each coin can be used as many times
// we want. What is the minimum number of coins needed? For example, if the
// coins are the euro coins (in cents) {1,2,5,10,20,50,100,200} and n = 520, we
// need at least four coins. The optimal solution is to select coins
// 200+200+100+20 whose sum is 520.

int main() {}