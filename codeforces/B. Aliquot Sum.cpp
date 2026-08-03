#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int64_t N;
    cin >> N;

    vector<int64_t> nums(N);
    int64_t max_a = 0;

    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
        max_a = max(max_a, nums[i]);
    }

    vector<int64_t> sum_div(max_a + 1, 0);

    for (int64_t i = 1; i <= max_a; ++i) {
        for (int64_t j = 2 * i; j <= max_a; j += i) {
            sum_div[j] += i;
        }
    }

    // Classify each number
    for (int64_t a : nums) {
        int64_t s = sum_div[a];
        if (s > a)
            cout << "abundant\n";
        else if (s < a)
            cout << "deficient\n";
        else
            cout << "perfect\n";
    }

    return 0;
}