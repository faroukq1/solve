#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    if (all_of(s.begin(), s.end(), [](char c) { return isupper(c); })) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else if (islower(s[0]) && all_of(s.begin() + 1, s.end(), [](char c) { return isupper(c); })) {
        s[0] = toupper(s[0]);
        transform(s.begin() + 1, s.end(), s.begin() + 1, ::tolower);
    }
    
    cout << s << endl;
    return 0;
}
