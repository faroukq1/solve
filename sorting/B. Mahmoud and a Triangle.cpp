#include<bits/stdc++.h>
using namespace std;






int main() {
    int N;
    cin >> N;
    vector<int> arr(N);

    for (auto &a : arr)
        cin >> a;

    sort(arr.rbegin(),arr.rend());

    auto valid = [&] (int a , int b, int c) -> bool {
        return (a + b > c) && (b + c > a) && (a + c > b);
    };

    for (int i = 0 ; i < N - 2 ; i++)
        if (valid(arr[i],arr[i + 1],arr[i + 2])) {
            cout << "YES";
            return 0;
        }

    cout << "NO";
                
} 
