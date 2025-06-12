#include <iostream>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <numeric>
#include <random>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
#include <limits>
#include <string>

using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)


const int N = 110;
int a[N];
void run_case () {
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)
        cin >> a[i];
	sort(a + 1,a + 1 + n);
	
    if(a[1] == a[n]){
		cout << -1 << endl;
		return;
	}

	int cnt = 0;
	for(int i = 1 ;i <= n;i++){
		if(a[i] == a[n])	
            cnt++;
	}
	
	cout << n - cnt << " " << cnt << endl;
	for(int i = 1; i <= n - cnt;i++)	
        cout << a[i] << " ";
	cout << endl;
	for(int i = n - cnt + 1;i <= n;i++)	
        cout << a[i] << " ";
	cout << endl;
	return;
}
int main() {
    int tt;
    cin >> tt;
    while (tt--)
        run_case();
    return 0;
}