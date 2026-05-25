#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int chest = 0, biceps = 0, back = 0;
  int i = 1;

  while (i <= n) {
    int input = 0;
    if (i == 1 || i == 4 || i == 7 || i == 10 || i == 13 || i == 16 ||
        i == 19 || i == 22 || i == 25) {
      cin >> input;
      chest += input;
    } else if (i == 2 || i == 5 || i == 8 || i == 11 || i == 14 || i == 17 ||
               i == 20 || i == 23) {
      cin >> input;
      biceps += input;
    } else {
      cin >> input;
      back += input;
    }
    i++;
  }
  if (chest > biceps && chest > back) {
    cout << "chest";
  } else if (biceps > chest && biceps > back) {
    cout << "biceps";
  } else {
    cout << "back";
  }

  return 0;
}

// optimal soln

/*
 * #include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int chest = 0, biceps = 0, back = 0;

    int i = 1;

    while (i <= n) {
        int x;
        cin >> x;

        if (i % 3 == 1)
            chest += x;
        else if (i % 3 == 2)
            biceps += x;
        else
            back += x;

        i++;
    }

    if (chest > biceps && chest > back)
        cout << "chest";
    else if (biceps > chest && biceps > back)
        cout << "biceps";
    else
        cout << "back";

    return 0;
}
*/
