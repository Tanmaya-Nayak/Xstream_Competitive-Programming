#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int X = 0;
  string s;
  while (n--) {
    cin >> s;
    if (s[0] == 'X' && s[1] == '+') {
      X++;
    } else if (s[0] == '+') {
      ++X;
    } else if (s[0] == '-') {
      --X;
    } else if (s[0] == 'X' && s[1] == '-') {
      X--;
    }
  }
  cout << X;
  return 0;
}

/*
 #include <iostream>
using namespace std;

int main() {
    int n, X = 0;
    cin >> n;

    string s;

    while (n--) {
        cin >> s;

        if (s[1] == '+')
            X++;
        else
            X--;
    }

    cout << X;
}
*/
