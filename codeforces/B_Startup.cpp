#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

void solve() {
    int N, K;
    cin >> N >> K;
    unordered_map<int, vector<int>> brand_map;

    for (int i = 0; i < K; i++) {
        int brand, cost;
        cin >> brand >> cost;
        brand_map[brand].push_back(cost);
    }

    vector<int> brand_revenues;


    for (auto &entry : brand_map) {
        auto &costs = entry.second;
        sort(costs.rbegin(), costs.rend());
        int revenue = 0;
        for (int cost : costs) {
            revenue += cost;
        }
        brand_revenues.push_back(revenue);
    }

    sort(brand_revenues.rbegin(), brand_revenues.rend());

    int ans = 0;
    for (int i = 0; i < N && i < brand_revenues.size(); i++) {
        ans += brand_revenues[i];
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
