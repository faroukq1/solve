#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    queue<pair<int, int>> q;  
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        q.push({i + 1, a[i]});  
    }
    
    int last_child = -1;
    
    while (!q.empty()) {
        auto current = q.front();
        q.pop();
        
        int index = current.first;
        int remaining_candies = current.second;
        
        remaining_candies -= m;
        
        if (remaining_candies > 0) {
            q.push({index, remaining_candies});
        }
        
        last_child = index;
    }
    
    cout << last_child << endl;
    
    return 0;
}
