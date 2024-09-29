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
using ll = long long;
void solve() {
  ll n, f;
  cin >> n >> f;

  vector<pair<ll, ll>> days(n);
  for (ll i = 0; i < n; i++) {
    ll products, clients;
    cin >> products >> clients;
    days[i] = {products, clients};
  }

  vector<ll> potential_increase;
  ll total_sold = 0;

  for (const auto &day : days) {
    ll products = day.first;
    ll clients = day.second;

    ll sold_without_sale = min(products, clients);
    total_sold += sold_without_sale;

    ll sold_with_sale = min(2 * products, clients);
    potential_increase.push_back(sold_with_sale - sold_without_sale);
  }

  sort(all(potential_increase), greater<ll>());

  for (ll i = 0; i < f; i++) {
    if (i < sz(potential_increase)) {
      total_sold += potential_increase[i];
    }
  }

  cout << total_sold << "\n";
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int TC = 1;
  // cin >> TC;
  while (TC--)
    solve();

  return 0;
}