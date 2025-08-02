#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)



int N;
vector<long long> store(21, 0);
long long answer = LONG_LONG_MAX;

void find_solution (int index, long long first, long long last) {
    // base case
    if (index == N) {
        answer = min(answer, abs(first - last));
        return;
    }

    find_solution(index + 1, first + store[index], last);
    find_solution(index + 1, first, last + store[index]);
}
void solve () {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> store[i];

    find_solution(0, 0, 0);

    cout << answer;
}


int main () {
    int test = 1;
    // cin >> test;
    while (test--)  solve();
}