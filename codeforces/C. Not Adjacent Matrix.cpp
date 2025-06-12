#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

void solve () {
	int N;
	cin >> N;
	if (N == 1) {
		cout << 1 << endl;
		return;
	}
	vector<vector<int>> arr(N , vector<int>(N , 0));
	auto valid_pos = [&] (int x , int y) -> bool {
		if (x < 0 || y < 0 || x > N - 1 || y > N - 1)
			return false;
		return true;
	};

	set < int > putted_numbers;

	for (int i = 0 ; i < N ; i++) {
		for (int j = 0 ; j < N ; j++) {
			if (arr[i][j] != 0)
				continue;
		


		int left = valid_pos(i , j - 1) ? arr[i][j - 1] : -1;
		int right = valid_pos(i , j + 1) ? arr[i][j + 1] : -1;
		int top = valid_pos(i + 1 , j) ? arr[i + 1][j] : -1;
		int buttom = valid_pos(i - 1, j) ? arr[i - 1][j] : -1;

		vector<int> directions = {left ,right , top , buttom};
		int value = 1;


		set<int> not_included;
		for (int k = 0 ; k < 4 ; k++) {
			if (directions[k] != -1) {
				not_included.insert(directions[k] - 1);
				not_included.insert(directions[k] + 1);
			}
		}
		bool find = false;
		for (int z = 1 ; z < N * N ; z++) {
			if (not_included.find(z) == not_included.end()) {

			}
		}
		/*
		1 3 5
		6 7 9
		2 4 5
		*/
	}
	}
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