#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve () {
	int N , K , L , C , D , P , NL , NP;
	cin >> N >> K >> L >> C >> D >> P >> NL >> NP;
	// 3 4 5 10 8 100 3 1
	// 3 ppl
	// 4 bottle of 5 millitre
	// 10 limes cuted into 8 slices
	// 100g of salt
	// they need : 3 ml of drink && 1g of salt
	cout << min(min(K * L / NL , C * D) , P / NP) / N << endl;
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