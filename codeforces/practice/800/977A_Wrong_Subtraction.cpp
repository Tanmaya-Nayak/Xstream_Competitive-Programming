#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  while (k--) {
    int lD = n % 10;
    if (lD > 0) {
      n -= 1;
    } else if (lD == 0) {
      n /= 10;
    }
  }
  cout << n;
  return 0;
}
