#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string t;
  cin >> t;

  int count = 0;
  reverse(t.begin(), t.end());

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == t[i]) {
      count++;
    } else {
      break;
    }
  }

  if (count == s.length() && s.length() == t.length()) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    reverse(t.begin(), t.end());

    if (s == t)
        cout << "YES";
    else
        cout << "NO";
}
*/
