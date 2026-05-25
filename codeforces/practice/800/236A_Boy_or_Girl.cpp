#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  int totalD = 0;

  for (int i = 0; i < s.length(); i++) {

    bool duplicate = false;

    for (int j = 0; j < i; j++) {
      if (s[i] == s[j]) {
        duplicate = true;
        break;
      }
    }

    if (!duplicate) {
      totalD++;
    }
  }

  if (totalD % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }

  return 0;
}
