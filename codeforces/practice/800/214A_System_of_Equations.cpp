#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int vaidP = 0;

  for (int i = 0; i <= 999; i++) {
    for (int j = 0; j <= 999; j++) {
      if ((i * i) + (j) == n && (i) + (j * j) == m) {
        vaidP++;
      }
    }
  }

  if (vaidP > 0) {
    cout << vaidP;
  } else {
    cout << "0";
  }
  return 0;
}

/*
 #include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int vaidP = 0;

  for (int i = 0; i * i <= n; i++) {
    int j = n - i * i;

    if (j >= 0 && i + j * j == m) {
      vaidP++;
    }
  }

  cout << vaidP;
  return 0;
}
*/
