    #include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void multiply(std::vector<int> &res, int x) {
    int carry = 0;
    for (int &digit : res) {
        int prod = digit * x + carry;
        digit = prod % 10;
        carry = prod / 10;
    }
    while (carry) {
        res.push_back(carry % 10);
        carry /= 10;
    }
}

std::vector<int> factorial_digits(int n) {
    std::vector<int> res = {1};
    for (int i = 2; i <= n; ++i)
        multiply(res, i);
    return res;
}
void solve () {
    int N;
    cin >> N;
    cout << N / 5 << endl;
    // to do
}

int main () {
    int test = 1;
    while (test--)  solve();
}