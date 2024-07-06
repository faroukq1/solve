#include<bits/stdc++.h>
using namespace std;


int main () {
    int N;
    cin >> N;
    while (N--) {
        int n , k;
        cin >> n >> k;
        vector<int> test(n);
        for (auto &t : test)
            cin >> t;

        if (test.size() < 2) {
            cout << 0 << "\n";
            continue; 
        }

        sort(test.begin(),test.end());

        int res = 1;
        int cpt = 1;
        for (int i = 1 ; i < n ; i++) {
            int diff = (test[i] - test[i - 1]);
            if (diff <= k) 
                cpt++;
            else {
                res = max(res , cpt);
                cpt = 1;
            }
        }    
        res = max(res , cpt);
        cout << (n - res) << "\n";
    }

}


