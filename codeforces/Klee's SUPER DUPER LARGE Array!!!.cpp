#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n; 
        cin >> n;
        
        unordered_map<int, int> x_0, x_1; 

        // Read the points
        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            if (y == 0) {
                x_0[x]++;
            } else {
                x_1[x]++;
            }
        }

        int right_triangles = 0;
        for (const auto& p : x_0) {
            if (x_1.find(p.first) != x_1.end()) {
                right_triangles += x_0[p.first] * x_1[p.first];
            }
        }

        cout << right_triangles << endl;
    }
    
    return 0;
}
