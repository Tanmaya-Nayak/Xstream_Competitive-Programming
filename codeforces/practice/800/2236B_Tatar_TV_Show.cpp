#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int t;
  cin >> t;

  while (t--) {
    long long int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    bool ok = true;

    for (int start = 0; start < k; start++) {
      int one = 0;

      for (int i = start; i < n; i += k) {
        if (s[i] == '1') {
          one++;
        }
      }

      if (one % 2 != 0) {
        ok = false;
        break;
      }
    }

    if (ok) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
