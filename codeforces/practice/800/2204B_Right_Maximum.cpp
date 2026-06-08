#include <bits/stdc++.h>
using namespace std;

int main() {
  long long t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
      cin >> a[i];
    }

    long long mx = LLONG_MIN;
    long long ans = 0;

    for (long long i = 0; i < n; i++) {
      if (a[i] >= mx) {
        mx = a[i];
        ans++;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}
