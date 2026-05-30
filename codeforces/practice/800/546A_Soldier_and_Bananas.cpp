#include <iostream>
using namespace std;

int main() {
  int k, n, w;
  cin >> k >> n >> w;

  int total = 0;
  for (int i = 1; i <= w; i++) {
    total += i * k;
  }

  int borrow = total - n;

  if (total > n) {
    cout << borrow;
  } else {
    cout << "0";
  }
  return 0;
}
