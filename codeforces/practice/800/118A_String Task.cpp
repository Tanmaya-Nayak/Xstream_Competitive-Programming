#include <iostream>
using namespace std;

/*
  int main() {
  string st;
  cin >> st;

  for (int i = 0; i < st.length(); i++) {
    if (st[i] != 'A' && st[i] != 'E' && st[i] != 'I' && st[i] != 'O' &&
        st[i] != 'U' && st[i] != 'Y' && st[i] != 'a' && st[i] != 'e' &&
        st[i] != 'i' && st[i] != 'o' && st[i] != 'u' && st[i] != 'y') {
      if (st[i] >= 65 && st[i] <= 90) {
        cout << '.';
        cout << char(st[i] + 32);
      } else if (st[i] >= 97 && st[i] <= 122) {
        cout << '.';
        cout << st[i];
      }
    }
  }
  cout << endl;
}
*/

int main() {
  string s;
  cin >> s;

  for (char c : s) {
    c = tolower(c);
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
      cout << '.' << c;
    }
  }
}
