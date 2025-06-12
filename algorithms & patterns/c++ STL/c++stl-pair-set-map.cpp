#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // set data structure
    // syntax : pair < type , type > name

    pair < int , int > p1 = make_pair(10 , 10);

    // display pairs

    cout << "first element of pair : " << p1.first << endl;
    cout << "second element of pair : " << p1.second << endl;

    // for example we can make vector of pairs

    vector< pair < int , int >> vec_pair;

    for (int i = 0 ; i < 10 ; i++)
    	vec_pair.push_back( make_pair(i , i + 1) );

    for (auto &a : vec_pair)
    	cout << a.first << ' ' << a.second << ' ';

    cout << endl;

    // sort vec_pairs

    sort(vec_pair.begin(),vec_pair.end() , [] (pair < int , int > &a , pair < int , int > &b) -> bool {
    	return a.first > b.first;
    });

    for (auto &a : vec_pair)
    	cout << a.first << ' ' << a.second << ' ';
	cout << endl;

	 // set data structure
	// set maded with red black tree
	// so we can get or delete of do anything in log(N)

	// syntax ? ==> set < type > name

	set <string> str;

	str.insert("farouk");
	str.insert("kader");

	// how to found element
	// first method
	if (str.count("farouk"))
		cout << "farouk in the set" << endl;

	// by using eterator
	auto str_it = str.find("kader");

	if (str_it != str.end())
		cout << "kader in the set" << endl;

	// using lower bound

	auto it_lower = str.lower_bound("farouk");

	// map data structre
	// map < type , type > name

	map < int , vector<int> > store;

	for (int i = 0 ; i < 10 ; i++)
		if (i % 2 == 0)
			store[2].push_back(i);
		else
			store[1].push_back(i);

	
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