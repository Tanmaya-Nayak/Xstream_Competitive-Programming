#include <iostream>
using namespace std;

int main() {
  int s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3 >> s4;

  if ((s1 == s2) && (s1 == s3) && (s1 == s4)) {
    cout << "3";
  }

  else if ((s1 == s2 && s3 == s4) || (s1 == s3 && s2 == s4) ||
           (s1 == s4 && s2 == s3)) {
    cout << "2";
  }

  else if ((s1 == s2 && s1 == s3) || (s1 == s2 && s1 == s4) ||
           (s1 == s3 && s1 == s4) || (s2 == s3 && s2 == s4)) {
    cout << "2";
  }

  else if (s1 == s2 || s1 == s3 || s1 == s4 || s2 == s3 || s2 == s4 ||
           s3 == s4) {
    cout << "1";
  }

  else {
    cout << "0";
  }

  return 0;
}

/*
#include <iostream>
#include <set>
using namespace std;

int main() {

    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> shoes;

    shoes.insert(s1);
    shoes.insert(s2);
    shoes.insert(s3);
    shoes.insert(s4);

    cout << 4 - shoes.size();

    return 0;
}
*/
