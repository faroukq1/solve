#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

string factorial_string (long long nums) {
    long long res = 1;
    for (int i = 1 ; i <= nums ; i++)
        res *= i;

    return to_string(res);
}

int main () {
    long long N;
    cin >> N;
    string fact = factorial_string(N);
    long long mx = -1 , temp = 0;

    for (long long i = 0 ; i < (long long)fact.length() ; i++)
        if (fact[i] == '0')
            for (long long j = i ; j < (long long)fact.length() ; j++) {
                if (fact[j] != '0') {
                    mx = max(temp , mx);
                    break;
                }
                temp++;
            }

    cout << mx << endl;
    return 0;
}