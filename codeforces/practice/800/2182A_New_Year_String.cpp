#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool has2025 = (s.find("2025") != string::npos);
    bool has2026 = (s.find("2026") != string::npos);

    if (has2025 && !has2026)
      cout << 1 << '\n';
    else
      cout << 0 << '\n';
  }

  return 0;
}
