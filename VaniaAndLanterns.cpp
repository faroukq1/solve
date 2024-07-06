#include<bits/stdc++.h>
using namespace std;

int main() {
    int n , l;
    cin >> n >> l;

    vector<int> pos(n);


    for (int i = 0 ;i < n ;i++)
        cin >> pos[i];


    sort(pos.begin(),pos.end());
    
    double maxGap = 0.0;

    for (int i = 1 ; i < n ; i++)
        maxGap = max(maxGap , (double)(pos[i] - pos[i - 1]));



    double maxRad = max((double)pos[0] , (double)(l - pos[n - 1]));
    maxRad = max(maxRad , maxGap / 2.0);

    cout << fixed << setprecision(10) << maxRad;
}


