#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin >> N;
    vector<long long> arr(N);
    for (auto &a : arr)
        cin >> a;
    
    set<long long> seen;
    int most_songs = 0;
    int j = 0;  

    for (int i = 0; i < N; ++i) {
        while (seen.find(arr[i]) != seen.end()) {
            seen.erase(arr[j]);
            j++;
        }
        seen.insert(arr[i]);
        most_songs = max(most_songs, i - j + 1);
    }

    cout << most_songs << endl;
    return 0;
}
