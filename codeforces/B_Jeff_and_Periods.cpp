#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;
vector<vector<int>> freq(MXN);
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  map<int, vector<int>> store;

  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    bool find = store.find(a) != store.end();
    if (find)
      store[a].push_back(i);
    else
      store.insert({a, {i}});
  }
  // here
  cout << store.size() << '\n';
  for (auto it = store.begin(); it != store.end(); it++) {
    int item = it->first;
    vector<int> itemList = it->second;
    if (itemList.size() == 0)
      continue;
    else if (itemList.size() == 1)
      cout << item << ' ' << 0 << '\n';
    else {
      int curr = itemList[1] - itemList[0];
      bool wrong = false;
      for (int k = 0; k < itemList.size() - 1, wrong = false; k++)
        if (itemList[k + 1] - itemList[k] != curr)
          wrong = true;
      cout << item << ' ' << curr << '\n';
    }
  }
}