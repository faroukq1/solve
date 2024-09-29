#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    bool all_upper = true;
    bool first_lower_rest_upper = true;
    
    for (char c : s) {
        if (islower(c)) {
            all_upper = false;
            break;
        }
    }
    
    if (!islower(s[0])) first_lower_rest_upper = false;
    for (int i = 1; i < s.length(); i++) {
        if (islower(s[i])) {
            first_lower_rest_upper = false;
            break;
        }
    }
    
    if (all_upper) {
        for (char &c : s) {
            c = tolower(c);
        }
    }
    else if (first_lower_rest_upper) {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }
    
    cout << s << endl;
    
    return 0;
}
