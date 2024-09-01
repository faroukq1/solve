#include<bits/stdc++.h>
#define int long long
using namespace std;
int calc(int x){
    int maxv = x % 10,minv = x % 10;
    while(x){
        maxv = max(maxv,x%10);
        minv = min(minv,x%10);
        x = x/10;
    }
    return maxv - minv;
}
void solve(){
    int l,r;
    cin >> l >> r;
    int ans = 0,v = -1;
    for(int i = l; i <= r; i ++){
        int temp = calc(i);
        if(temp > v){
            ans = i;
            v = temp;
            if(v == 9) break;
        }
    }
    cout << ans << endl;
}
signed main(){
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int T;
    cin >> T;
    while(T --) solve();
    return 0;
}