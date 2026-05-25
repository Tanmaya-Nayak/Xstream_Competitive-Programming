#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int pA = 0;
  int xA = 0;
  int axA = 0;
  int yA = 0;
  int ayA = 0;
  int xB = 0;
  int axB = 0;
  int yB = 0;
  int ayB = 0;
  int i = 1;

  while (i <= n) {
    cin >> pA;
    if (pA == 1) {
      cin >> xA;
      axA += xA;
      cin >> yA;
      ayA += yA;
    }
    if (pA == 2) {
      cin >> xB;
      axB += xB;
      cin >> yB;
      ayB += yB;
    }
    i++;
  }
  if (axA >= ayA) {
    cout << "LIVE\n";
  } else {
    cout << "DEAD\n";
  }
  if (axB >= ayB) {
    cout << "LIVE\n";
  } else {
    cout << "DEAD\n";
  }
  return 0;
}
