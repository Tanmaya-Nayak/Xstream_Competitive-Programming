#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;

  int lD = 0;

  while (n > 0) {
    if (n % 10 == 7 || n % 10 == 4) {
      lD++;
    }
    n /= 10;
  }

  int x = lD;
  bool ok = true;

  if (x == 0)
    ok = false;

  while (x > 0) {
    int d = x % 10;
    if (d != 4 && d != 7) {
      ok = false;
      break;
    }
    x /= 10;
  }

  if (ok) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}
