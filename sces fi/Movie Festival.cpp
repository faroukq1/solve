#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
    int n;
    cin >> n;
    vector<pair<int , int>> movies(n);

    for (auto &a : movies)
        cin >> a.first >> a.second;

    
    auto compare = [&] (pair<int , int>&a , pair<int ,int>&b) -> bool {
        return a.second < b.second;
    };
    sort(movies.begin(),movies.end() , compare);

    int finishing_time = -1;
    int cpt = 0;

    for (int i = 0 ; i < movies.size() ; i++)
        if (finishing_time <= movies[i].first) {
            cpt++;
            finishing_time = movies[i].second;
        }

    cout << cpt << endl;
}
