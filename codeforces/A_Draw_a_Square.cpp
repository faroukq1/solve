#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
int getDist(int x1, int y1, int x2, int y2) {
    return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
}

bool isSquare(int l, int r, int d, int u) {
    pair<int, int> A = {-l, 0};
    pair<int, int> B = {r, 0};
    pair<int, int> C = {0, -d};
    pair<int, int> D = {0, u};

    vector<int> dist;
    dist.push_back(getDist(A.first, A.second, B.first, B.second));
    dist.push_back(getDist(A.first, A.second, C.first, C.second));
    dist.push_back(getDist(A.first, A.second, D.first, D.second));
    dist.push_back(getDist(B.first, B.second, C.first, C.second));
    dist.push_back(getDist(B.first, B.second, D.first, D.second));
    dist.push_back(getDist(C.first, C.second, D.first, D.second));

    sort(dist.begin(), dist.end());

    return (dist[0] > 0) &&
           (dist[0] == dist[1] && 
            dist[1] == dist[2] &&
            dist[2] == dist[3]) &&
           (dist[4] == dist[5]) &&  
           (2 * dist[0] == dist[4]);
}

void run_case() {
    // solving
    int a, b, c , d;
    cin >> a >> b >> c >> d;
    bool ans = isSquare(a, b, c, d);
    cout << (ans ? "Yes" : "No") << endl;
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