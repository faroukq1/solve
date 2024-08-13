#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
using ll = long long;
int main() {
    vector<int> arr(4);
    for (auto &a : arr)
        cin >> a;
    vector<int> sorted = arr;
    sort(sorted.begin(),sorted.end());
    int x = sorted[0] , y = sorted[1] , z = sorted[2] , h = sorted[3];

    // x + c = h
    // a + b = x
    // a + c = y
    // b + c = z
    // -b + c = x + y
    // c = ((x + y + z) / 2)
    int c = ((x + y + z) / 2);
    int a = y - c;
    int b = z -c;
    cout << a << ' ' << b << ' ' << c <<endl;
    return 0;
}