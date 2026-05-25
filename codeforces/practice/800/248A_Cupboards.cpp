#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int l;
  int r;

  int zeroL = 0;
  int oneL = 0;
  int zeroR = 0;
  int oneR = 0;

  int Lsum = 0;
  int Rsum = 0;
  while (n--) {
    cin >> l;
    cin >> r;

    if (l == 0)
      zeroL++;
    else
      oneL++;
    if (r == 0)
      zeroR++;
    else
      oneR++;
  }
  if (zeroL > oneL) {
    Lsum += oneL;
  } else if (zeroL < oneL) {
    Lsum += zeroL;
  } else {
    Lsum += zeroL;
  }

  if (zeroR > oneR) {
    Rsum += oneR;
  } else if (zeroR < oneR) {
    Rsum += zeroR;
  } else {
    Rsum += zeroR;
  }

  cout << Lsum + Rsum;
  return 0;
}
