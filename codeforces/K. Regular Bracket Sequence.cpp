#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


int main () {
    string S;
    cin >> S;
    int ans = 0;
    stack<char> store;
    for (auto &c : S) {
        if (!store.empty() && c == ')' && store.top() == '(') {
            ans++;
            store.pop();
            continue;
        }

        store.push(c);
    }

    // (()))(
    /*
    empty : stack = (
    not empty : ((
    not empty : we have '(' and imput is ')' so we pop
    stack will be ( and ans = 1
    not empty : input ')' we pop '(' and ans++
    stack empty and ans = 2
    stack is empty so we push )
    not empty and input ( so we do nothing
    we have 2 pair so we mult the result * 2
    */
   cout << ans * 2 << endl;
    return 0;
}