#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long int n;
    cin >> n;

    vector<long long int> a(n);
    vector<long long int> b(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
      if (a[i] > b[i]) {
        swap(a[i], b[i]);
      }
    }

    long long int countB = 0;
    for (int p : b) {
      countB += p;
    }

    long long int max = LLONG_MIN;
    for (int i = 0; i < n; i++) {
      if (a[i] > max) {
        max = a[i];
      } else {
        continue;
      }
    }

    cout << max + countB << endl;
  }
  return 0;
}
