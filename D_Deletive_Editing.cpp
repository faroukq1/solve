#include<bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int len (string s) {
    return s.length();
}

void run_case() {
    // don't forget to learn it
    string s, t;
    cin >> s >> t;
    vector<int> counter(256);
    for (int i = 0; i < len(s); i++)
        counter[s[i]]++;

    for (int i = 0; i < len(t); i++)
        counter[t[i]]--;

    int min = *min_element(counter.begin(), counter.end());
    if (min < 0) {
        cout << "NO" << endl;
        return;
    }

    string query;
    for (int i = 0; i < len(s); i++) {
        const int curr = s[i];
        if (counter[curr] == 0)
            query.push_back(curr);
        else
            counter[curr]--;
    }

    bool ans = query == t;
    cout << (ans ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
#ifndef NEAL_DEBUG
    cin.tie(nullptr);
#endif

    int tests;
    cin >> tests;

    while (tests-- > 0)
        run_case();
}