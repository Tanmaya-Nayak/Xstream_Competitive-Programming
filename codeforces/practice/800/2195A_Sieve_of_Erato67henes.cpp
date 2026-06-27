#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    vector<int> a(n);

    for (auto &x : a) {
      cin >> x;
    }

    bool sixSEV = 0;

    for (int i = 0; i < n; i++) {
      if (a[i] == 67) {
        sixSEV = 1;
        break;
      } else {
        continue;
      }
    }

    if (sixSEV == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
