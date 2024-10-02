#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve () {
	long long N , M;
	cin >> N >> M;

	if (N % M == 0)
		cout << 1;
	else if (M % N == 0)
		cout << M / N; 
	else if (N > M)
		cout << 2;
	else
		cout << (M / N) + 1;

	cout << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    cin >> tt;
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