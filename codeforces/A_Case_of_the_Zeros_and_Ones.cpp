#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

const int MXN = 1e5 + 5, INF = 1e9 + 5;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int N;
  cin >> N;
  string a;
  cin >> a;

  stack<int> store;
  auto valid = [&](char &c) -> bool {
    return !store.empty() && ((store.top() == '0' && c == '1') ||
                              (store.top() == '1' && c == '0'));
  };
  for (auto c : a)
    if (valid(c))
      store.pop();
    else
      store.push(c);

  cout << store.size();
  return 0;
}