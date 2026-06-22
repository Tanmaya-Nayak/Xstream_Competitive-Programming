#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll int t;
  cin >> t;

  while (t--) {
    int n = 7;
    vector<int> a(n);

    for (auto &val : a) {
      cin >> val;
    }

    sort(a.begin(), a.end());
    int sum = a[n - 1];
    for (int i = 0; i < n - 1; i++) {
      sum -= a[i];
    }

    cout << sum << endl;
  }
  return 0;
}
