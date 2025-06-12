#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)



int main () {
    long long tt;
    cin >> tt;
    vector<pair<long long , long long >> events;

    while (tt--) {
        long long a , b;
        cin >> a >> b;
        events.push_back({a , 1});
        events.push_back({b , -1});
    }


    sort(events.begin(),events.end());

    long long actual_customers = 0;
    long long max_customers = 0;

    for (int i = 0 ; i < events.size(); i++) {
        actual_customers += events[i].second;
        max_customers = max(max_customers , actual_customers);
    }

    cout << max_customers << endl;
    return 0;
}
