#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
      cin >> x;

    // calc original
    long long best = 0;
    int mx = 0;
    for (int x : a) {
      mx = max(mx, x);
      best += mx;
    }

    // try swapping global max to index 0
    int maxIdx = max_element(a.begin(), a.end()) - a.begin();
    swap(a[0], a[maxIdx]);

    long long cur = 0;
    mx = 0;
    for (int x : a) {
      mx = max(mx, x);
      cur += mx;
    }
    best = max(best, cur);

    cout << best << "\n";
  }
}
