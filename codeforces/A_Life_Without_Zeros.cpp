#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

string remove_zeros (string s) {
    s.erase(remove(s.begin(),s.end() , '0') , s.end());
    return s;
}


void solve () {
    string A , B;
    cin >> A >> B;

    string first_sum = remove_zeros(to_string(stoi(A) + stoi(B)));
    A = remove_zeros(A);
    B = remove_zeros(B);

    string second_sum = to_string(stoi(A) + stoi(B));

    bool correct = (first_sum == second_sum);

    cout << (correct ? "YES" : "NO") << endl;

}
int main () {
    int tt = 1;
    while (tt--)
        solve();
    return 0;
}