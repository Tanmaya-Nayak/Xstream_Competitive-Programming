#include <bits/stdc++.h>
using namespace std;

int main() {
  int digits;
  cin >> digits;

  int lkyd;
  cin >> lkyd;

  int n;
  int count = 0;
  while (digits--) {
    cin >> n;
    int ld = 0;
    while (n > 0) {
      int num = n % 10;
      if (num == 4 || num == 7) {
        ld++;
      }
      n /= 10;
    }
    if (lkyd >= ld) {
      count++;
    }
  }

  cout << count;
  return 0;
}
