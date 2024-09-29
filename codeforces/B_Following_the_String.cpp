#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

void solve() {
  int N;
  cin >> N;
  vector<int> arr(N);
  for (auto &a : arr)
    cin >> a;

  map<char, int> store;
  char firstChar = 'a';
  string ans = "";

  for (int i = 0; i < N; i++) {
    int idx = arr[i];
    bool found = false;

    // Search for a character that matches the count
    for (auto &entry : store) {
      if (entry.second == idx) {
        ans.push_back(entry.first);
        store[entry.first]++;
        found = true;
        break;
      }
    }

    // If no character matches, add a new character
    if (!found) {
      ans.push_back(firstChar);
      store[firstChar] = 1;
      firstChar++;
    }
  }

  cout << ans << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--)
    solve();
  return 0;
}

// a b c a d a e a b c a

/*
a : 0
b : 0
c : 0
a : 1
d : 0
a : 2
e : 0
a : 3
b : 1
c : 1
a : 4
 */