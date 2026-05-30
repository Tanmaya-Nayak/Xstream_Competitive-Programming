#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int wa = a;
  int wb = b;
  int year = 0;

  while (wa <= wb) {
    wa *= 3;
    wb *= 2;
    year++;
  }

  cout << year;
  return 0;
}
