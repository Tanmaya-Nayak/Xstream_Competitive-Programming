#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    ll int ans = 0;
    for (int i = 0; i < (int)s.length() - 1; i++) {
      if (s[i] == s[i + 1]) {
        ans++;
      } else {
        continue;
      }
    }

    if (ans <= 2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
