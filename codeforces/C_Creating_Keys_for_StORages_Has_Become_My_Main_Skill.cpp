#include <bits/stdc++.h>
using namespace std;

void run_case() {
    int64_t n, x;
    cin >> n >> x;
    
    int max_bit = 0;
    for (int i = 29; i >= 0; i--) {
        if ((x >> i) & 1) {
            max_bit = i;
            break;
        }
    }
    
    int mex_value = 1;
    while ((1 << mex_value) - 1 <= x) {
        mex_value++;
    }
    mex_value--;
    
    vector<int> result;
    for (int i = 0; i < mex_value; i++) {
        result.push_back(i);
    }
    
    int64_t current_or = 0;
    for (int num : result) {
        current_or |= num;
    }
    
    if (current_or != x) {
        result.push_back(x ^ current_or);
    }
    
    while (result.size() < n) {
        result.push_back(0);
    }
    
    for (int i = 0; i < n; i++) {
        cout << result[i] << (i == n - 1 ? "\n" : " ");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tests;
    cin >> tests;
    
    while (tests-- > 0)
        run_case();
    
    return 0;
}