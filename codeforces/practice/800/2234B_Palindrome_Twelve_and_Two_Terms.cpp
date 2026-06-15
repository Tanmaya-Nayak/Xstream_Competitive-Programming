#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    if (n % 12 != 10) {
      cout << n % 12 << " " << n - n % 12 << "\n";
    } else {
      if (n == 10) {
        cout << -1 << "\n";
      } else {
        cout << 22 << " " << n - 22 << "\n";
      }
    }
  }
}
