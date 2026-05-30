#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;

  int Up = 0;
  int Lo = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      Lo++;
    } else {
      Up++;
    }
  }

  if (Up > Lo) {
    for (int i = 0; i < s.length(); i++) {
      s[i] = toupper(s[i]);
    }
  } else if (Lo > Up) {
    for (int i = 0; i < s.length(); i++) {
      s[i] = tolower(s[i]);
    }
  } else {
    for (int i = 0; i < s.length(); i++) {
      s[i] = tolower(s[i]);
    }
  }

  cout << s;
  return 0;
}

/*
 * for(char &c : s){
 *    c = tolower(c);
 * }
 */
