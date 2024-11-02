#include <iostream>
#include <set>
#include <string>
using namespace std;

void run_case() {
    string S;
    int N;
    cin >> S >> N;
    int len = S.length();

    set<int> indices;

    auto check_substring = [&](int i) -> bool {
        return i >= 0 && i + 3 < len && S.substr(i, 4) == "1100";
    };

    for (int i = 0; i + 3 < len; ++i) 
        if (check_substring(i)) indices.insert(i);
      
    while (N--) {
        int a;
        char c;
        cin >> a >> c;
        --a;

        for (int i = a - 3; i <= a; ++i) 
            if (check_substring(i)) indices.erase(i);
      
        S[a] = c;
        for (int i = a - 3; i <= a; ++i) 
            if (check_substring(i)) indices.insert(i);

        cout << (indices.empty() ? "NO" : "YES") << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        run_case();
    }
    return 0;
}
