#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> v;
  int a;

  while (n--) {
    cin >> a;
    v.push_back(a);
  }

  int count = 0;
  int score = v[k - 1];

  for (int i = 0; i < v.size(); i++) {
    if (v[i] >= score && v[i] > 0) {
      count++;
    }
  }

  cout << count;

  return 0;
}
