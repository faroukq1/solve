#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> weights(3);

  for (auto &w : weights)
    cin >> w;

  string coins = "ABC";
  map<char, int> store;
  store['A'] = 0;
  store['B'] = 0;
  store['C'] = 0;

  for (int i = 0; i < weights.size(); i++)
    for (int j = 0; j < coins.length(); j++) {
      char coin = (char)coins[j];
      if (weights[i][0] == coin && weights[i][1] == '>')
        store[coin]++;
      if (weights[i][weights[i].length() - 1] == coin && weights[i][1] == '<')
        store[coin]++;
    }
  vector<int> res(3);
  for (auto it = store.begin(); it != store.end(); it++)
    res[it->second] = it->first;

  int counter = 0;
  for (int i = 0; i < coins.length(); i++)
    for (int j = 0; j < res.size(); j++) {
      char coin = coins[i], symbol = res[j];
      if (coin == symbol)
        counter++;
    }

  if (counter != 3)
    cout << "Impossible";
  else
    for (auto &a : res)
      cout << (char)a;
}
