#include<bits/stdc++.h>
using namespace std;


int main () {
    int s,n;
    cin >> s >> n;
    vector<pair <int , int > > dragons(n);
    for (int i = 0 ; i < n; i++)  {
        int temp1 ,temp2;
        cin >> temp1 >> temp2;
        dragons[i] = {temp1 , temp2};
    }

    sort(dragons.begin(),dragons.end());


    for (int i = 0 ; i < dragons.size(); i++) {
        if (s <= dragons[i].first) {
            cout << "NO";
            return 0;
        } else {
            s =  s + dragons[i].second;
        } 
    }

    cout << "YES";
}