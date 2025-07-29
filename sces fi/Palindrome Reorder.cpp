#include <bits/stdc++.h>
using namespace std;
 
string solve() {
    string S;
    cin >> S;
    int N = S.length();
    string ans(N, ' ');
 
    int freq[26] = {};
    for (int i = 0; i < N; i++) {
        freq[S[i] - 'A'] += 1;
    }
 
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            cnt += 1;
        }
    }
 
    if (cnt > 1)
        return "NO SOLUTION";
 
    int left = 0, right = N - 1;
    for (int i = 0; i < N; i++) {
        if (freq[S[i] - 'A'] % 2 == 1) {
            ans[N / 2] = S[i];
            freq[S[i] - 'A'] -= 1;
        }
        while (freq[S[i] - 'A'] > 0) {
            ans[left++] = ans[right--] = S[i];
            freq[S[i] - 'A'] -= 2;
        }
    }
    return ans;
}
 
int main()
{
    cout << solve() << endl;
    return 0;
}
