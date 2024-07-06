#include<bits/stdc++.h>
using namespace std;


int main () {
    string N;
    cin >> N;
    if (N.length() < 2) {
        cout << 0;
        return 0;
    }


    int cpt = 0 , x = 11;
    while (x >= 10) {
        x = 0;
        for (int i = 0 ; i < N.length() ;i++)
            x = x + (N[i] - '0');

        N = to_string(x);

        cpt++;
    }

    cout << cpt;
}