#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    int cost = 0, k = 1, prev = 0;
    for (int x : a) {
      if (x >= prev && (k == 1 || x == 1)) {
        k *= x;
        prev = x;
      } else {
        cost = (cost + k) % 676767677;
        k = x;
        prev = x;
      }
    }
    cost = (cost + k) % 676767677;
    cout << cost << "\n";
  }
}
