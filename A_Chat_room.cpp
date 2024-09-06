#include <bits/stdc++.h>
using namespace std;

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

int main () {
  string s;
  cin >> s;
  string greeting = "hello";
  int index = 0;
  for (int i = 0 ; i <s.length() ; i++)
    if (index < 5 && s[i] == greeting[index])
      index++;

  cout << (index == 5 ? "YES" : "NO") << endl;
}