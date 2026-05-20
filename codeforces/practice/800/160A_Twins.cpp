#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> cn;
  int count = 0;
  int ysum = 0;
  int sum = 0;
  while (n--) {
    int c;
    cin >> c;
    cn.push_back(c);
  }
  sort(cn.rbegin(), cn.rend());
  for (int i = 0; i < cn.size(); i++) {
    sum += cn[i];
  }
  for (int a : cn) {
    ysum += a;
    count++;
    if (ysum > sum - ysum) {
      break;
    }
  }

  cout << count;
  return 0;
}

/*
  #include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;                   //this input is crazy

    sort(a.rbegin(), a.rend());

    int total = accumulate(a.begin(), a.end(), 0);   //i need to know abt
accumulate; int cur = 0, cnt = 0;

    for (int x : a) {
        cur += x;
        cnt++;
        if (cur > total - cur) break;
    }

    cout << cnt;
}
*/
