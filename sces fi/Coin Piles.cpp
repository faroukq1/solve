#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)




void solve() {
    int64_t a, b;
    cin >> a >> b;

    if ((a + b) % 3 != 0) {
        cout << "NO\n";
        return;
    }

    if (a > b) 
        swap(a, b);

    cout << (a * 2 < b ? "NO" : "YES") << endl;
}
// got limited time on this
void run_case () {
    int64_t a, b;
    cin >> a >> b;


    auto not_valid = [&] (int64_t a, int64_t b) -> bool {
        bool first = (a == 0 && b != 0) || (b == 0 && a != 0);
        bool second = a == 2 && b == 2;
        return first || second;
    };
    if (a == 0 && b == 0)
        return void(cout << "YES" << endl);

    if (not_valid(a, b))
        return void(cout << "NO" << endl);

    

    while (a > 0 && b > 0) {
        if (b > a)
            swap(a, b);

        
        // dbg(a, b);
        a -= 2;
        b -= 1;
    }
    cout << (not_valid(a, b) ? "NO" : "YES") << endl;
}

int main () {
    int test = 1;
    cin >> test;
    while (test--)  
        solve();
}