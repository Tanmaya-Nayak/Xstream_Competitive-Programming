#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> h(n);

    for (int i = 0; i < n; i++) {
      cin >> h[i];
    }

    sort(h.begin(), h.end());

    int ans = h[n - 1] + 1 - h[0];

    cout << ans << '\n';
  }
}
