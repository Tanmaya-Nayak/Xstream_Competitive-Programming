#include <bits/stdc++.h>
using namespace std;

void user_input() {
  int n;
  cin >> n;

  // user input n element;
  vector<int> v1(n);
  for (int i = 0; i < n; i++) {
    cin >> v1[i];
  }

  // user input using push_back ;
  vector<int> v2(n);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v2.push_back(x);
  }

  // input 2D vector
  int rows, columns;
  cin >> rows >> columns;
  vector<vector<int>> grid(rows, vector<int>(columns));
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cin >> grid[i][j];
    }
  }

  // input vector of pair
  int m;
  cin >> m;
  vector<pair<int, int>> vp(m);
  for (int i = 0; i < m; i++) {
    cin >> vp[i].first >> vp[i].second;
  }
}

// declaration and initialization
void init() {
  vector<int> v;        // empty vector
  vector<int> v1(5, 0); // 5 size vector//and initialization with {0,0,0,0,0}
  vector<int> v2 = {1, 2, 4, 6, 8}; // declaration and initialization

  // 2D vector

  vector<vector<int>> grid(3, vector<int>(4, 0)); // 3x4 filled with 0;

  // vector of pair
  vector<pair<int, int>> vp = {{1, 2}, {2, 3}, {4, 5}};
}

void add_remove() {
  vector<int> v = {1, 2, 3};
  v.push_back(4);
  v.emplace_back(5);
  v.pop_back();
  v.insert(v.begin(), 0);
  v.insert(v.begin() + 2, 99);
  v.erase(v.begin());
  v.erase(v.begin() + 1);
  v.erase(v.begin() + 1, v.begin() + 3);
  v.clear();
}

void access() {
  vector<int> v = {1, 2, 3, 4, 5};
  cout << v[0] << "\n";
  cout << v.at(1) << "\n";
  cout << v.front() << "\n";
  cout << v.back() << "\n";

  for (int x : v)
    cout << x << " ";
  cout << "\n";

  for (int i = 0; i < (int)v.size(); i++)
    cout << v[i] << " ";
  cout << "\n";
}

void size_cap() {
  vector<int> v = {1, 2, 3};

  cout << v.size() << "\n";  // 3 — number of elements
  cout << v.empty() << "\n"; // 0 — not empty
  v.resize(6, 0);            // resize to 6, new elements = 0
  v.assign(5, 1);            // replace with 5 ones → {1,1,1,1,1}
  v.reserve(100);            // pre-allocate memory (avoid rehash)
}

void sort_search() {
  vector<int> v = {5, 3, 1, 4, 2};
  sort(v.begin(), v.end());
  sort(v.rbegin(), v.rend());
  reverse(v.begin(), v.end());
  int mn = *min_element(v.begin(), v.end());
  int mx = *max_element(v.begin(), v.end());
  sort(v.begin(), v.end(), [](int a, int b) { return abs(a) < abs(b); });

  vector<pair<int, int>> vp = {{2, 3}, {1, 4}, {1, 1}, {2, 1}};
  sort(vp.begin(), vp.end(),
       [](auto &a, auto &b) { return a.second < b.second; });

  // binary search (vector must be sorted)
  sort(v.begin(), v.end());
  auto it1 = lower_bound(v.begin(), v.end(), 3);
  auto it2 = upper_bound(v.begin(), v.end(), 3);
  int indx = it1 - v.begin();
}

void dedup() {
  vector<int> v = {2, 3, 1, 2, 3, 4, 5, 4};
  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());
  for (int x : v) {
    cout << x << " ";
  }
  cout << "\n";
}

void prefix_sum() {
  vector<int> a = {1, 2, 3, 4, 5};
  int n = a.size();
  vector<int> pre(n + 1, 0);

  for (int i = 0; i < n; i++)
    pre[i + 1] = pre[i] + a[i];

  // sum from index l to r (0-indexed)
  int l = 1, r = 3;
  cout << pre[r + 1] - pre[l] << "\n"; // 2+3+4 = 9
}

void swap_merge() {
  vector<int> v1 = {1, 3, 5};
  vector<int> v2 = {2, 4, 6};
  swap(v1, v2);

  vector<int> merged(v1.size() + v2.size());
  merge(v1.begin(), v1.end(), v2.begin(), v2.end(), merged.begin());

  vector<int> v3(v1.size());
  copy(v1.begin(), v1.end(), v3.begin());
}

void algorithms() {
  vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6};

  // sum
  long long total = accumulate(v.begin(), v.end(), 0LL);

  // count occurrences
  int cnt = count(v.begin(), v.end(), 1);

  // count with condition
  int cnt2 = count_if(v.begin(), v.end(), [](int x) { return x > 3; });

  // fill
  fill(v.begin(), v.end(), 0); // all zeros

  // iota — fill with sequence
  iota(v.begin(), v.end(), 1); // {1,2,3,4,5,6,7,8}

  // next_permutation
  vector<int> p = {1, 2, 3};
  do {
    // process each permutation
  } while (next_permutation(p.begin(), p.end()));
}

void practice() {

  // 1. Create vector {5,3,1,4,2}, sort descending
  vector<int> v1 = {5, 3, 1, 4, 2};
  sort(v1.begin(), v1.end(), greater<int>());

  cout << "Task1: ";
  for (int x : v1)
    cout << x << " ";
  cout << endl;

  // 2. Find min and max without sorting
  vector<int> v2 = {5, 3, 1, 4, 2};

  int mn = *min_element(v2.begin(), v2.end());
  int mx = *max_element(v2.begin(), v2.end());

  cout << "Task2: Min=" << mn << " Max=" << mx << endl;

  // 3. Remove duplicates
  vector<int> v3 = {1, 1, 2, 3, 3, 4};

  sort(v3.begin(), v3.end());
  v3.erase(unique(v3.begin(), v3.end()), v3.end());

  cout << "Task3: ";
  for (int x : v3)
    cout << x << " ";
  cout << endl;

  // 4. Prefix sum from index 2 to 4
  vector<int> v4 = {1, 2, 3, 4, 5};
  vector<int> pre(v4.size() + 1, 0);

  for (int i = 0; i < v4.size(); i++)
    pre[i + 1] = pre[i] + v4[i];

  int l = 2, r = 4;

  cout << "Task4: " << pre[r + 1] - pre[l] << endl;

  // 5. Insert 99 at index 2
  vector<int> v5 = {1, 2, 3, 4, 5};

  v5.insert(v5.begin() + 2, 99);

  cout << "Task5: ";
  for (int x : v5)
    cout << x << " ";
  cout << endl;

  // 6. Sort vector of pairs by second element descending
  vector<pair<int, int>> vp = {{1, 5}, {2, 3}, {3, 8}};

  sort(vp.begin(), vp.end(),
       [](pair<int, int> a, pair<int, int> b) { return a.second > b.second; });

  cout << "Task6: ";
  for (auto p : vp)
    cout << "(" << p.first << "," << p.second << ") ";
  cout << endl;

  // 7. Merge two sorted vectors
  vector<int> a = {1, 3, 5};
  vector<int> b = {2, 4, 6};
  vector<int> merged(6);

  merge(a.begin(), a.end(), b.begin(), b.end(), merged.begin());

  cout << "Task7: ";
  for (int x : merged)
    cout << x << " ";
  cout << endl;

  // 8. Count elements greater than 3
  vector<int> v8 = {1, 2, 3, 4, 5, 6};

  int cnt = count_if(v8.begin(), v8.end(), [](int x) { return x > 3; });

  cout << "Task8: " << cnt << endl;
}

int main() {
  user_input();
  init();
  add_remove();
  access();
  size_cap();
  sort_search();
  dedup();
  prefix_sum();
  swap_merge();
  algorithms();
  practice();
  return 0;
}
