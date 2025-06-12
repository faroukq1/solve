#include<bits/stdc++.h>
using namespace std;


int main () {
    int N;
    cin >> N;

    vector<int> months(12);

    for (int i = 0 ; i < 12 ; i++)
        cin >> months[i];

    sort(months.begin(),months.end());

    int minMonth = 0 , cpt = 0;

    for (int i = 11 ; i >= 0 ; i--)
        if (minMonth < N) {
            minMonth = minMonth + months[i];
            cpt++;
        }
        else
            break;

    if (minMonth < N) {
        cout << -1;
        return 0;
    }

    cout << cpt;
}


