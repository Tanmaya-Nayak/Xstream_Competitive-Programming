#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<ll> a(n);
    for (auto &x : a)
      cin >> x;

    ll sum = 0;
    int ans = 0;

    for (int i = n - 1; i >= 0; i--) {
      sum += a[i];

      if (sum > 0) {
        ans++;
      } else {
        sum = 0;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}
