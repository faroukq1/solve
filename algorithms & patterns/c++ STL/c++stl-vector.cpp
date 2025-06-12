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
    	cout << *it++ << ' ';
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
    cout << "compare between pairs : " << endl;
    sort(pair_vector.begin(),pair_vector.end() , compare);
    for (auto &a : pair_vector)
    	cout << a.first << ':' << a.second << ' ';
    cout << endl;


    // how to erase element
    // vec.erase(vec.begin() + pos);
    vec.erase(vec.begin() + 1); // removing the second elment O(N)
    vec.insert(vec.begin() + 1 , 10); // inserting at pos 1 the value = 10 O(N)
    output_vector(vec);


    // how to add element from the back
    vec.push_back(10);
    output_vector(vec);


    // how to reverse array
    reverse(vec.begin(),vec.end());

    // how to remove element from the last
    vec.pop_back();

    // how to clear vec
    vector<int> clear = vec;
    cout << "vector before clearing : " << endl;
    output_vector(clear);
    clear.clear();
    cout << "clearing the vector : " << endl;
    output_vector(clear);


    /*
    MANIPULATION OF VECTORS
    */

    // ditance on vector
    vector<int> manipulate;

    for (int i = 0 ; i < 10 ; i++)
        manipulate.push_back(i + 1);

    // the distance between pos 2 and 4
    // idk why this didn't work cout << "distnace : " << distane(manipulate.begin() + 2 , manipulate.begin() + 4);

    // how to replace item on vector

    replace(manipulate.begin(),manipulate.end() , 3 , 5);

    // here replacing the 3 by 5

    output_vector(manipulate);

    // replace by predicate
    auto odd = [&] (int a) -> bool {
        return a & 1;
    };
    replace_if(manipulate.begin(),manipulate.end() , odd , 15);
    // every odd element replace it by 15

    /*
    THIS MANIPULATION TECHNIQUE ONLY WORK
    WITH SORTED ARRAY
    SO WE HAVE TO SORT THE VECTOR BEFORE
    USING IT
    */ 


    // sorting the array
    sort(manipulate.begin(),manipulate.end());

    // the binary search

    int ans = binary_search(manipulate.begin(),manipulate.end() , 7);

    cout << (ans != -1 ? "there is number = 7" : "we didn't find anythig") << endl;

    // lower bound and upper bound

    /*
    lower bound allows you to get the first
    value that equal or greater than the 
    given value

    upper bound is only give the greater element
    than the given value
    */ 

    auto upper = upper_bound(manipulate.begin(),manipulate.end() , 10);

    cout << *upper << ' ' << endl;


    // unique : get the deblicate element and push it into the back

    for (int i = 0 ; i < 3 ; i++)
        manipulate.push_back(i + 1);

    // how to remove deblicate
    // in sorted array the unique give the index of the first
    // deblicated element
    // erase it with .end() eterator

    manipulate.erase(unique(manipulate.begin(),manipulate.end()) , manipulate.end());

    output_vector(manipulate);

    // how to get the max element
    int mx = *max_element(manipulate.begin(),manipulate.end());

    // how to get them min element
    int mn = *min_element(manipulate.begin(),manipulate.end());

    cout << "min value : " << mn << "max value : " << mx << endl;

    // how to get the sum of the vector
    // acumulate(eterators , initial value);
    int sum = accumulate(manipulate.begin(),manipulate.end() , 0);
    // get the mult of the vector

    int mult = accumulate(manipulate.begin(),manipulate.end() , 1 , multiplies<int>());

    cout << "sum of vector : " << sum << "mult of vector : " << mult << endl;
    // how to get the inner product
    // v[0] * v[1] + v1[0] * v1[1] ...
    int inner_product_of_two_vectors = inner_product(manipulate.begin(),manipulate.end() , vec.begin() , 0);
    cout << "the inner product of manipulate and vec : " << endl;
    cout << inner_product_of_two_vectors << ' ' << endl;

    // remove such elements
    manipulate.erase(remove(manipulate.begin(),manipulate.end() , 3) , manipulate.end());

    // items with value = 6 has been removed

    // how to rotate vector

    rotate(manipulate.begin(),manipulate.end() , manipulate.end());

    output_vector(manipulate);


    // // get permutation of vector

    // sort(manipulate.begin(),manipulate.end());

    // do {
    //     output_vector(manipulate);
    // } while (next_permutation(manipulate.begin(),manipulate.end()));

    

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