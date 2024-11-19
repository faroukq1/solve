#include <iostream>
#include <vector>
using namespace std;

bool is_composite(int n) {
    if (n < 4) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return true;
    }
    return false;
}

vector<int> solve(int n) {
    if (n <= 3) return {-1};
    
    vector<int> ans(n);
    
    // Start with the pattern [4,1,6,3,8,5,10,7,...]
    // This ensures that adjacent sums are: 5,7,9,11,13,... which are mostly composite
    int evenNum = 4; // Start with 4
    int oddNum = 1;  // Start with 1
    
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            // Place even numbers starting from 4
            ans[i] = evenNum;
            evenNum += 2;
        } else {
            // Place odd numbers starting from 1
            ans[i] = oddNum;
            oddNum += 2;
        }
        
        if(ans[i] > n) return {-1}; // If we exceed n, solution is impossible
    }
    
    // Verify solution
    for(int i = 0; i < n-1; i++) {
        if(!is_composite(ans[i] + ans[i+1])) {
            return {-1};
        }
    }
    
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> result = solve(n);
        
        if(result[0] == -1) {
            cout << "-1\n";
        } else {
            for(int i = 0; i < n; i++) {
                cout << result[i] << (i == n-1 ? '\n' : ' ');
            }
        }
    }
    
    return 0;
}