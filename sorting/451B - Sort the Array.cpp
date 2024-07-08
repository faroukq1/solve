#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int left = 0, right = n - 1;
  while (left < n - 1 && a[left] < a[left + 1]) {
    left++;
  }

  if (left == n - 1) {
    cout << "yes\n1 1" << endl;
    return 0;
  }

  while (right > 0 && a[right] > a[right - 1]) {
    right--;
  }

  reverse(a.begin() + left, a.begin() + right + 1);

  bool sorted = true;
  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      sorted = false;
      break;
    }
  }

  if (sorted) {
    cout << "yes" << endl;
    cout << left + 1 << " " << right + 1 << endl;
  } else {
    cout << "no" << endl;
  }

  return 0;
}