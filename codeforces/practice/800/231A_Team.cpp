#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int Petya;
  int Vasya;
  int Tonya;
  int correct = 0;
  while (n--) {
    int A1 = 0;
    int A0 = 0;
    cin >> Petya;
    if (Petya == 1) {
      A1++;
    } else {
      A0++;
    }

    cin >> Vasya;
    if (Vasya == 1) {
      A1++;
    } else {
      A0++;
    }

    cin >> Tonya;
    if (Tonya == 1) {
      A1++;
    } else {
      A0++;
    }

    if (A1 > A0) {
      correct++;
    } else {
      continue;
    }
  }

  cout << correct;
  return 0;
}
