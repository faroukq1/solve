#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canEqualizeThreadlets(long long a, long long b, long long c) {
    vector<long long> threadlets = {a, b, c};
    sort(threadlets.begin(), threadlets.end());
    
    if (threadlets[0] == threadlets[2]) return true;
    
    long long sum = a + b + c;
    
    for (int pieces = 2; pieces <= 6; pieces++) {
        if (sum % pieces == 0) {
            long long target = sum / pieces;
            int cuts = 0;
            bool possible = true;
            
            for (long long length : threadlets) {
                while (length > target) {
                    length -= target;
                    cuts++;
                    if (cuts > 3) {
                        possible = false;
                        break;
                    }
                }
                if (!possible) break;
                if (length != target) {
                    possible = false;
                    break;
                }
            }
            
            if (possible) return true;
        }
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        
        if (canEqualizeThreadlets(a, b, c)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}