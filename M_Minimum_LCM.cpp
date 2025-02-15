#include <bits/stdc++.h>
using namespace std;
 
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
 
 
long long __lcm(int a, int b) {
    if (a == 0 || b == 0)
        return 0LL;
    return (abs(a) / __gcd(abs(a), abs(b))) * abs(b);
}

using ll = long long;
// got limited time exceeded on this
void run_case() {
    // solving
    ll N;
    cin >> N;
    ll first = 1, last = N - 1;
    set<ll> seen;
    vector<pair<pair<ll,ll>, ll>> answer;
    while (first <= last) {
        ll lcm = __lcm(first, last);
        if (seen.find(lcm) != seen.end())
            break;
 
        seen.insert(lcm);
        answer.push_back({{first, last}, lcm});
        first++;
        last--;
    }
    auto compare = [&] (pair<pair<ll, ll>, ll>& a, pair<pair<ll, ll>, ll>& b) -> bool {
        return a.second < b.second;
    };
 
    sort(answer.begin(), answer.end(), compare);
    auto ans = answer.front();
 
    // for (auto &a : answer) {
    //     cout << "***********" << endl;
    //     cout << "{" << a.first.first << ',' << a.first.second << "}" << endl;
    //     cout << a.second << endl;
    // }
 
    cout << ans.first.first << ' ' << ans.first.second << endl;
}

ll smallestPrimeFactor(ll n) {
    if (n % 2 == 0) return 2;
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return i;
    }
    return n;
}

void solve() {
    ll n;
    cin >> n;
    if (n == 2) {
        cout << "1 1\n";
        return;
    }
    ll spf = smallestPrimeFactor(n);
    if (spf == n) {
        cout << "1 " << n - 1 << "\n";
    } else {
        ll d = n / spf;
        cout << d << " " << n - d << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}