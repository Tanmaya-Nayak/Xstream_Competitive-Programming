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

    sort(a.rbegin(), a.rend());

    bool dup = false;

    for (int i = 0; i + 1 < n; i++)
      if (a[i] == a[i + 1])
        dup = true;

    if (dup)
      cout << -1 << "\n";

    else {
      for (int x : a)
        cout << x << " ";
      cout << "\n";
    }
  }
}
