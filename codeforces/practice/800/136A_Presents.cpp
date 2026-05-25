#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> sw;
  vector<int> Asw(n);
  while (n--) {
    int f;
    cin >> f;
    sw.push_back(f);
  }

  for (int i = 0; i < sw.size(); i++) {
    int temp = sw[i];
    Asw[temp - 1] = i + 1;
  }

  for (int x : Asw) {
    cout << x << " ";
  }
  return 0;
}
