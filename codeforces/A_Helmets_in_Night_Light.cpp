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
#include <limits.h>

using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MAX_RESIDENTS = 1e5 + 5;
pair < long long , long long > residents[MAX_RESIDENTS];
void solve () {
    int numResidents;
    long long directNotifyCost;
    cin >> numResidents >> directNotifyCost;

    for (int i = 1 ; i <= numResidents ; i++)
        cin >> residents[i].second;

    for (int i = 1; i <= numResidents ; i++)
        cin >> residents[i].first;

    for (int i = 1; i <= numResidents; i++)
        residents[i].first = min(directNotifyCost , residents[i].first);

    sort(residents + 1, residents + 1 + numResidents);

    long long totalCost = directNotifyCost;
    int residentIndex = 1;
    long long sharesCounted = 0;

    for (int i = 2 ; i <= numResidents; i++) {
        totalCost += residents[residentIndex].first;
        sharesCounted++;

        if (sharesCounted == residents[residentIndex].second) {
            sharesCounted = 0;
            residentIndex++;
        }
    }

    cout << totalCost << endl;
}
int main() {
ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}