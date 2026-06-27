#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll int t;
  cin >> t;

  while (t--) {
    ll int a, b, n;
    cin >> a >> b >> n;
    ll int m = n;
    ll int count = 1;
    ll int pLen = min(b, a / m);

    while (m > 0) {
      ll int aLen = min(b, a / m);
      if (pLen == aLen) {
        m--;
        continue;
      } else {
        count++;
        m--;
      }
    }

    cout << count << endl;
  }
  return 0;
}
