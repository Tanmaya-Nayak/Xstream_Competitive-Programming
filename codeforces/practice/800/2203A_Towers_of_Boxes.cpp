#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, m, d;
    cin >> n >> m >> d;

    int maxBoxes = (d / m) + 1;
    double tower = (double)n / maxBoxes;
    cout << (int)ceil(tower) << endl;
  }
  return 0;
}
