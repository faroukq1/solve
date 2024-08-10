#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<char> arr(N);
  for (auto &a : arr)
    cin >> a;

  map<char, int> freq_map;
  for (int i = 0; i < N; i++)
    if (freq_map.find(arr[i]) != freq_map.end())
      freq_map[arr[i]]++;
    else
      freq_map.insert({arr[i], 1});

  vector<pair<string, int>> store;
  for (int i = 0; i < N - 1; i++) {
    string pair_str = string(1, arr[i]) + string(1, arr[i + 1]);
    int sum_freq = freq_map[arr[i]] + freq_map[arr[i + 1]];
    store.push_back({pair_str, sum_freq});
  }

  auto compare = [&](pair<string, int> &a, pair<string, int> &b) -> bool {
    return a.second > b.second;
  };

  for (int i = 0; i < N - 1; i++)
    for (int j = 0; j < N - 1; j++) {
      if (i == j)
        continue;
      if (store[j].first == store[i].first)
        store[j].second += store[i].second;
    }

  sort(store.begin(), store.end(), compare);

  if (!store.empty()) {
    cout << store[0].first << endl;
  }

  return 0;
}
