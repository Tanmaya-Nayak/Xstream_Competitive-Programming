#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string targ = "hello";
  int j = 0;

  for (char c : s) {
    if (c == targ[j]) {
      j++;
    }
  }
  if (targ.length() == j) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
