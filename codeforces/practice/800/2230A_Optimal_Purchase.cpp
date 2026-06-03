#include <iostream>
using namespace std;

int main() {
  long long int t;
  cin >> t;

  while (t--) {
    long long int n, a, b;
    cin >> n >> a >> b;
    long long int indK = a * n;
    long long int grK = ((n / 3) * b) + (a * (n % 3));

    if (indK < grK && n >= 3) {
      cout << indK;
    } else if (indK > ((n + 2) / 3) * b && grK > ((n + 2) / 3) * b) {
      cout << ((n + 2) / 3) * b;
    } else {
      cout << grK;
    }
    cout << "\n";
  }
  return 0;
}
