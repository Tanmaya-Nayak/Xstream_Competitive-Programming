#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long k, x;
    cin >> k >> x;
    for (int i = 0; i < k; i++) {
      x *= 2;
    }
    cout << x << "\n";
  }
  return 0;
}
