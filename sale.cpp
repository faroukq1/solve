#include<bits/stdc++.h>
using namespace std;


int main () {
    int m , n;
    cin >> m >> n;
    vector<int> tvs(m);

    for (auto &m : tvs)
        cin >> m;

    sort(tvs.begin(),tvs.end());

    int ans = 0;

    for (int i = 0 ; i < tvs.size() ; i++)
        if(tvs[i] < 0) {
            ans = ans + tvs[i];
            n--;
            if (n == 0)
                break;
        } else
            break;

    cout << -ans;


    return 0;
}


