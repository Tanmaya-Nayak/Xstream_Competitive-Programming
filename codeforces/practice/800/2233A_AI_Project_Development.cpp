#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n, x, y, z;
    cin >> n >> x >> y >> z;

    long long int nNwai = (n + (x + y) - 1) / (x + y);

    long long int lines = x * z;
    long long int remi = n - lines;
    if (remi < 0)
      remi = 0;
    long long int nNai = z + (remi + (x + 10 * y) - 1) / (x + 10 * y);

    if (nNwai < nNai)
      cout << nNwai << "\n";
    else
      cout << nNai << "\n";
  }
}
