#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define i64 long long
#define i128 __int128
#define int long long
#define endl '\n'
using namespace std;
const i64 mod = 1e15+7;
const int maxn = 3e6+10;
 
signed main()
{
    IOS;
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int ans = 0;
        int now = 1;
        while(n % now == 0)
        {
            ans++;
            now++;
        }
        cout << ans << endl;
    }
    return 0;
}