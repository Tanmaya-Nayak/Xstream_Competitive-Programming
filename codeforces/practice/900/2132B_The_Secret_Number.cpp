#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;

    vector<long long> ans;
    long long d = 10;
    for (int k = 1; k <= 18; k++) {
      long long divisor = d + 1;
      if (divisor > n)
        break;
      if (n % divisor == 0) {
        ans.push_back(n / divisor);
      }
      if (d > n)
        break;
      d *= 10;
    }

    sort(ans.begin(), ans.end());

    cout << ans.size();
    for (long long x : ans)
      cout << " " << x;
    cout << "\n";
  }
  return 0;
}
