#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

// Utility functions for comparison
template <typename S, typename T> void smax(S &a, const T &b) {
  if (a < b)
    a = b;
}
template <typename S, typename T> void smin(S &a, const T &b) {
  if (a > b)
    a = b;
}

// Random number generator setup
#define rng_init                                                               \
  mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_seed(x) mt19937 rng(x)
#define rng(x) rng(x)
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
const int MXN = 1e5 + 5, INF = 1e9 + 5;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b, c;
  cin >> a >> b >> c;
  vector<string> keys(a);
  bool containShift = false;
  for (int i = 0; i <= a; i++) {
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
      if (a[i] == 'S')
        containShift = true;
    keys[i] = a;
  }

  if (!containShift) {
    cout << "-1";
    return 0;
  }

  string word;
  cin >> word;

  auto cantPrint = [&](char symbol) -> bool {
    int distance = 1;
    for (int i = 0; i < keys.size(); i++) {
      if (distance > c)
        return true;

      distance = 1;
      for (int j = 0; j < keys[i].length(); j++) {
        const int letter = keys[i][j];
        const char compareLetter = isupper(symbol) ? tolower(symbol) : symbol;

        if (letter == compareLetter)
          break;
        else
          distance++;
      }
    }

    return false;
  };

  int cpt = 0;

  for (int i = 0; i < word.length(); i++) {
    const char symbol = word[i];
    if (symbol > 'A' && symbol < 'Z')
      if (cantPrint(symbol))
        cpt++;

    dbg((char)symbol, cpt);
  }

  cout << cpt;
}