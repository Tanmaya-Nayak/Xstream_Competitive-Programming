#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<long long> b(n);

    for (int i = 0; i < n; i++)
      cin >> b[i];
    sort(b.begin(), b.end());

    long long x = b[n - 1], y = b[n - 2];

    vector<long long> seq;

    seq.push_back(x);
    seq.push_back(y);

    long long a = x, c = y;

    while (seq.size() < n && c != 0) {
      long long r = a % c;
      seq.push_back(r);
      a = c;
      c = r;
    }

    sort(seq.begin(), seq.end());

    if (seq == b)
      cout << x << " " << y << "\n";
    else
      cout << -1 << "\n";
  }
  return 0;
}
