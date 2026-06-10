#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll int t;
  cin >> t;

  while (t--) {
    ll int n;
    cin >> n;

    char s;
    int lB = 0;
    int rB = 0;
    for (ll int i = 0; i < n; i++) {
      cin >> s;

      if (s == '(') {
        lB += 1;
      } else {
        rB += 1;
      }
    }

    if (lB == rB) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
