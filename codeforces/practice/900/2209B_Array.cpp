#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    vector<long long> a(n);
    for (auto &x : a)
      scanf("%lld", &x);

    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
      int greater_cnt = 0, less_cnt = 0;
      for (int j = i + 1; j < n; j++) {
        if (a[j] > a[i])
          greater_cnt++;
        else if (a[j] < a[i])
          less_cnt++;
      }
      ans[i] = max(greater_cnt, less_cnt);
    }

    for (int i = 0; i < n; i++)
      printf("%d ", ans[i]);
    printf("\n");
  }
}
