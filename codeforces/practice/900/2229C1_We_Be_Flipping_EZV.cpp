/*
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  ll int t;
  cin >> t;

  while (t--) {
    ll int n;
    cin >> n;

    vector<int> a(n);

    for (ll int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int count = 0;
    vector<int> b;

    for (ll int i = 0; i < n; i++) {
      if (a[i] > 0) {
        b.push_back(i+1);
        for (int j = 0; j <= i; j++) {
          a[j] = -a[j];
        }
        count++;
      }
    }

    if (count == 0) {
      cout << count;
      cout << "\n";
    } else {
      cout << count << endl;
      for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}

*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  ll int t;
  cin >> t;
  while (t--) {
    ll int n;
    cin >> n;
    vector<int> a(n);
    for (ll int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int count = 0;
    vector<int> b;

    bool flip = false;

    for (ll int i = n - 1; i >= 0; i--) {
      int current_value;

      if (flip == false) {
        current_value = a[i];
      } else {
        current_value = -a[i];
      }

      if (current_value > 0) {
        b.push_back(i + 1);
        count++;

        if (flip == false) {
          flip = true;
        } else {
          flip = false;
        }
      }
    }

    if (count == 0) {
      cout << count;
      cout << "\n";
    } else {
      cout << count << endl;
      for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}
