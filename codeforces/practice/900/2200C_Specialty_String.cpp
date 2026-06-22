#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int len = 0;

    for (int i = 0; i < n; i++) {
      if (len > 0 && s[len - 1] == s[i]) {
        len--;
      } else {
        s[len] = s[i];
        len++;
      }
    }

    cout << (len == 0 ? "YES" : "NO") << "\n";
  }
  return 0;
}
