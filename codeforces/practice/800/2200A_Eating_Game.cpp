#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int mx = 0, ans = 0;

    for (int val : a) {
      mx = max(val, mx);
    }

    for (int i : a) {
      if (i == mx) {
        ans++;
      }
    }

    cout << ans << endl;
  }
}
