#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


void output_vector (const vector<int> &arr , bool add = false) {
	for (auto &a : arr)
		cout << (add ? a + 1 : a) << ' ';

	cout << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // #vector baic tests

    // create vector vector < type > name (number_of_cells , initial_value)
    // by default the initial value == 0

    cout << "creating the vector : " << endl;
    vector<int> vec(5 , 1);
    for (int i = 0 ; i < 10 ; i++)
    	vec[i] += i;

    output_vector(vec);


    const int length = 4;
    int arr[length] = {1 , 2 , 3 , 4};

    // create vector from arr
    cout << "cloning vector from array : " << endl;
    vector<int> clone_array(arr , arr + length);
    output_vector(clone_array);
    // swap element of vector by refrence
    // swap(vec.begin() + position_of_element , vec.end())
    
    cout << "swap the first and last element of array : " << endl;
    cout << "swap goes by reference : " << endl;
    swap(vec.front(),vec.back()); // will swap the first value with he last value
    output_vector(vec);

    // how to copy vector from vector
    cout << "copy vector from vector : " << endl;
    vector<int> vec2(vec.begin(),vec.end());
    output_vector(vec2);

    // resize vector
    cout << "resize vector : " << endl;
    vector<int> resized_vector = vec;
    resized_vector.resize(2);
    output_vector(resized_vector);


    // how to acccess vector item
    // simply like c-style array

    // first way by reference
    cout << "first way (by reference) : " << endl;  
    auto it = vec.begin();
    while (it != vec.end())
    	cout << *it++ << 	' ';
    cout << endl;

    cout << "by index : " << endl;
    for (int i = 0 ; i < (int)vec.size() ; i++)
    	cout << vec[i] << ' ';

    cout << endl;


    // how to sort array
    cout << "sort vector : " << endl;
    // sort(vec.begin() + pos , vec.end() - pos);
    sort(vec.begin(),vec.end());
    // sort in dec order
    output_vector(vec);
    sort(vec.begin(),vec.end() , greater<int>());

    // compare by function (predicate)
    // let's say we have vector of pairs
    vector<pair<int , int >> pair_vector;
    for (int i = 0 ; i < 5 ; i++)
    	pair_vector.push_back({i , i + 1});

    // make compare function

    auto compare = [&] (pair<int , int >&a , pair < int , int >&b) -> bool {
    	return a.first > b.first;
    };

    sort(pair_vector.begin(),pair_vector.end() , compare);
    for (auto &a : pair_vector)
    	cout << a.first << ' ' << a.second << ' ';
    cout << endl;


    // how to erase element
    // vec.erase(vec.begin() + pos);
    vec.erase(vec.begin() + 1); // removing the second elment O(N)
    vec.insert(vec.begin() + 1 , 10); // inserting at pos 1 the value = 10 O(N)
    output_vector(vec);
    
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