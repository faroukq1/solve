#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


long long MOD = 1e9 + 7;

void solve () {
    int N;
    cin >> N;
    vector<int> dp(N + 1);
    dp[0] = 1;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            if (j <= i)
                dp[i] = (dp[i] + dp[i - j]) % MOD;

    cout << dp[N] << endl;
}


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    // cin >> tt;
    while (tt--)
        solve();
    return 0;

    #ifndef ONLINE_JUDGE
    function<bool(string,string)> compareFiles = [](string p1, string p2)->bool {
        std::ifstream file1(p1);
        std::ifstream file2(p2);
        if (!file1.is_open() || !file2.is_open()){
            return false;
        }
        cerr<<"checking.... ";
        std::string line1, line2;
        while (std::getline(file1, line1) && std::getline(file2, line2)) {
            if (line1 != line2)
                return false;
        }
        return file1.eof() && file2.eof();
    };
    bool check = compareFiles("output.txt","expected.txt");
    if (check) cerr<<"OK\n";
    else cerr<<"Failed!\n";
#endif
}