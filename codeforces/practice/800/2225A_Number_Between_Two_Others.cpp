#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int t;
  cin >> t;

  while (t--) {
    long long int x, y;
    cin >> x >> y;

    if (y / x == 2) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}
