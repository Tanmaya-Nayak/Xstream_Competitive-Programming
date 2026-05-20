#include <bits/stdc++.h>
using namespace std;

int main() {
  string s1;
  cin >> s1;
  int i, j;
  for (i = 0; i < s1.length(); i += 2) {
    for (j = i + 2; j < s1.length(); j += 2) {
      if (s1[i] > s1[j]) {
        swap(s1[i], s1[j]);
      }
    }
  }
  for (char s : s1) {
    cout << s;
  }
  return 0;
}

/*
int main() {
  string s;
  cin >> s;

  vector<char> nums;

  // Extract digits
  for (char c : s) {
    if (c != '+')
      nums.push_back(c);
  }

  // Sort digits
  sort(nums.begin(), nums.end());

  // Print result
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i];
    if (i != nums.size() - 1)
      cout << "+";
  }

  return 0;
}
*/
