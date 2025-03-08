#include <iostream>
#include <string>
using namespace std;

void run_case() {
    // solving
    string s;
    cin >> s;
    const int len = s.length();
    if (len <= 10)
        cout << s << endl;
    else
        cout << s.front() << len - 2 << s.back() << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Read input
    int t = 1;
    // If there are multiple test cases, uncomment the next line
    // cin >> t;
    
    // Process each test case
    while (t--) {
        run_case();
    }
    
    return 0;
}