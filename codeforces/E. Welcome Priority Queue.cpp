#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    scanf("%d", &q);
    
    priority_queue<long long> pq;
    
    for (int i = 0; i < q; i++) {
        char cmd[10];
        scanf("%s", cmd);
        
        if (strcmp(cmd, "push") == 0) {
            long long x;
            scanf("%lld", &x);
            pq.push(x);
        } else if (strcmp(cmd, "top") == 0) {
            printf("%lld\n", pq.top());
        } else {
            pq.pop();
        }
    }
    
    return 0;
}