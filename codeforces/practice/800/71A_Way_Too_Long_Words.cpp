#include <iostream>
using namespace std;

/*
int main() {
  int n;
  cin >> n;
  string s;
  int c = 0;
  while (n--) {
    cin >> s;
    if (s.length() > 10) {
      int c = 0;
      for (int i = 1; i < s.size() - 1; i++) {
        c++;
      }
      cout << s[0];
      cout << c;
      cout << s[s.length() - 1] << endl;
    } else {
      cout << s << endl;
    }
  }
}*/

int main() {
  int n;
  cin >> n;

  while (n--) {
    string s;
    cin >> s;

    if (s.length() > 10) {
      cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
    } else {
      cout << s << endl;
    }
  }
  return 0;
}
