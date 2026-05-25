#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string t;
  cin >> t;

  int count = 1;
  int next = 0;
  for (char c : t) {
    if (s[next] == c) {
      next++;
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
