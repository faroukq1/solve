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
  string lang;
  cin >> lang;
  pair<char, char> v = {'a', 'e'};
  set<char> letters = {'a', 'e', 'b', 'c', 'd'};
  auto isVowel = [&](char c) -> bool { return c == v.first || c == v.second; };
  auto isLeter = [&](char c) -> bool {
    return letters.find(c) != letters.end();
  };
  for (int i = 0; i < N;)
    if (!isVowel(lang[i]) && isVowel(lang[i + 1]))
      if (!isVowel(lang[i + 2]) && isVowel(lang[i + 3])) {
        if (isLeter(lang[i]))
          cout << lang[i];
        if (isLeter(lang[i + 1]))
          cout << lang[i + 1];
        i += 2;
        if (i < N)
          cout << '.';
      } else if (!isVowel(lang[i + 2]) && !isVowel(lang[i + 3])) {
        if (isLeter(lang[i]))
          cout << lang[i];
        if (isLeter(lang[i + 1]))
          cout << lang[i + 1];
        if (isLeter(lang[i + 2]))
          cout << lang[i + 2];
        i += 3;
        if (i < N)
          cout << '.';
      }

  cout << endl;
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