#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> a(n);
    unordered_set<long long> s;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      s.insert(a[i]);
    }

    int ans = 0;
    for (long long v : s) {
      int len = 0;
      while (s.count(v + len)) {
        len++;
      }
      ans = max(ans, len);
    }

    cout << ans << "\n";
  }
  return 0;
}
