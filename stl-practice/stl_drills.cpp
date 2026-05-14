/**
 * STL MASTERY DRILLS — Xstream_Coding
 * Run locally, read each section, then close the file and type it from memory.
 * Goal: zero hesitation in contests.
 */

#include <bits/stdc++.h>
using namespace std;

// ══════════════════════════════════════════════════════════════
// 1. VECTOR — your bread and butter
// ══════════════════════════════════════════════════════════════
void drill_vector() {
    vector<int> v = {5, 3, 1, 4, 2};

    sort(v.begin(), v.end());              // ascending
    sort(v.rbegin(), v.rend());            // descending
    reverse(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());
    int mx = *max_element(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end()); // deduplicate (must sort first)

    // 2D vector
    int n = 3, m = 4;
    vector<vector<int>> grid(n, vector<int>(m, 0));

    // prefix sum
    vector<int> a = {1,2,3,4,5};
    vector<int> pre(a.size()+1, 0);
    for (int i = 0; i < (int)a.size(); i++) pre[i+1] = pre[i] + a[i];
    // sum from l to r (0-indexed): pre[r+1] - pre[l]
}

// ══════════════════════════════════════════════════════════════
// 2. MAP & UNORDERED_MAP — frequency, lookup
// ══════════════════════════════════════════════════════════════
void drill_map() {
    map<int,int> freq;
    vector<int> arr = {1,2,2,3,3,3};
    for (int x : arr) freq[x]++;

    // iterate in sorted key order
    for (auto& [key, val] : freq)
        cout << key << " -> " << val << "\n";

    // lower_bound / upper_bound on map
    auto it = freq.lower_bound(2);  // first key >= 2
    if (it != freq.end()) cout << it->first << "\n";

    // unordered_map: O(1) avg but no order, worst O(n)
    unordered_map<int,int> ump;
    ump.reserve(1 << 16);           // avoid rehash in contests
    ump.max_load_factor(0.25);
    ump[42] = 100;
}

// ══════════════════════════════════════════════════════════════
// 3. SET & MULTISET — sorted unique / sorted with dupes
// ══════════════════════════════════════════════════════════════
void drill_set() {
    set<int> s = {3, 1, 4, 1, 5};   // stores {1,3,4,5}
    s.insert(2);
    s.erase(3);
    bool found = s.count(4);         // 1 or 0

    auto it = s.lower_bound(3);      // first element >= 3
    auto it2 = s.upper_bound(3);     // first element >  3

    // predecessor / successor
    if (it != s.begin()) { --it; cout << *it; } // largest < 3

    multiset<int> ms = {1,2,2,3};
    ms.erase(ms.find(2));            // erase ONE occurrence of 2
    // ms.erase(2) would erase ALL 2s — never do that by mistake
}

// ══════════════════════════════════════════════════════════════
// 4. PRIORITY QUEUE — heap
// ══════════════════════════════════════════════════════════════
void drill_pq() {
    // MAX heap (default)
    priority_queue<int> maxpq;
    maxpq.push(3); maxpq.push(1); maxpq.push(4);
    cout << maxpq.top() << "\n"; // 4
    maxpq.pop();

    // MIN heap — memorise this syntax cold
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(3); minpq.push(1); minpq.push(4);
    cout << minpq.top() << "\n"; // 1

    // pair in pq: sorts by first, then second
    priority_queue<pair<int,int>> pq;
    pq.push({10, 2});
    pq.push({10, 5});
    cout << pq.top().second << "\n"; // 5 (larger second first)

    // Dijkstra pattern (min-heap on distance)
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> dijk;
    dijk.push({0, 0}); // {dist, node}
}

// ══════════════════════════════════════════════════════════════
// 5. QUEUE & DEQUE & STACK
// ══════════════════════════════════════════════════════════════
void drill_queue() {
    queue<int> q;
    q.push(1); q.push(2); q.push(3);
    cout << q.front() << " " << q.back() << "\n";
    q.pop(); // removes front

    stack<int> st;
    st.push(10); st.push(20);
    cout << st.top() << "\n"; // 20
    st.pop();

    // Deque: push/pop both ends O(1)
    deque<int> dq;
    dq.push_front(1); dq.push_back(2);
    dq.pop_front(); dq.pop_back();
    // Sliding window max/min uses deque
}

// ══════════════════════════════════════════════════════════════
// 6. BINARY SEARCH — lower/upper bound patterns
// ══════════════════════════════════════════════════════════════
void drill_bsearch() {
    vector<int> v = {1,2,4,4,5,7};

    // lower_bound: first position where v[i] >= target
    auto it1 = lower_bound(v.begin(), v.end(), 4); // points to first 4
    int idx1  = it1 - v.begin(); // 2

    // upper_bound: first position where v[i] > target
    auto it2 = upper_bound(v.begin(), v.end(), 4); // points to 5
    int idx2  = it2 - v.begin(); // 4

    int count4 = idx2 - idx1; // how many 4s = 2

    // binary search on answer (classic pattern)
    // int lo=0, hi=1e9, ans=hi;
    // while(lo<=hi){ int mid=(lo+hi)/2; if(check(mid)){ans=mid;hi=mid-1;}else lo=mid+1;}
}

// ══════════════════════════════════════════════════════════════
// 7. STRING TRICKS
// ══════════════════════════════════════════════════════════════
void drill_string() {
    string s = "hello world";
    cout << s.size() << "\n";
    cout << s.substr(6, 5) << "\n";     // "world"
    cout << s.find("world") << "\n";    // 6
    if (s.find("xyz") == string::npos) cout << "not found\n";

    // split by space
    stringstream ss(s);
    string word;
    while (ss >> word) cout << word << "\n";

    // int <-> string
    int n = stoi("42");
    string t = to_string(42);

    // sort characters
    sort(s.begin(), s.end());
}

// ══════════════════════════════════════════════════════════════
// 8. ALGORITHM LIBRARY — must know
// ══════════════════════════════════════════════════════════════
void drill_algo() {
    vector<int> v = {3,1,4,1,5,9};

    // accumulate (sum, product, etc.)
    long long total = accumulate(v.begin(), v.end(), 0LL);

    // next_permutation — for brute force on small n
    sort(v.begin(), v.end());
    do {
        // process permutation
    } while (next_permutation(v.begin(), v.end()));

    // fill, iota
    vector<int> a(10);
    iota(a.begin(), a.end(), 0);   // 0,1,2,...,9
    fill(a.begin(), a.end(), -1);  // all -1

    // __gcd, __builtin_popcount
    int g = __gcd(12, 8);          // 4
    int bits = __builtin_popcount(7); // 3 (binary 111)
    int lz   = __builtin_clz(8);      // leading zeros (be careful with 0)

    // count, count_if
    int cnt = count(v.begin(), v.end(), 1);
    int cnt2 = count_if(v.begin(), v.end(), [](int x){ return x > 3; });
}

// ══════════════════════════════════════════════════════════════
// 9. BITSET — fast operations on 0/1 arrays
// ══════════════════════════════════════════════════════════════
void drill_bitset() {
    bitset<100> bs;
    bs.set(5);        // set bit 5
    bs.reset(5);      // clear bit 5
    bs.flip(5);       // toggle
    bs[3] = 1;
    cout << bs.count() << "\n"; // number of 1s
    cout << bs.to_string() << "\n";
}

// ══════════════════════════════════════════════════════════════
// PRACTICE TASKS (write these without looking up):
//
//  1. Count frequency of each char in a string using map
//  2. Find the k-th largest element using min-heap of size k
//  3. Sliding window max of size k using deque
//  4. Binary search: first index where arr[i] >= x
//  5. Dijkstra on a graph using priority_queue
//  6. Merge two sorted vectors using merge()
//  7. Find all unique pairs (i,j) such that arr[i]+arr[j]=target
//     (sort + two pointers OR sort + lower_bound)
// ══════════════════════════════════════════════════════════════

int main() {
    drill_vector();
    drill_map();
    drill_set();
    drill_pq();
    drill_queue();
    drill_bsearch();
    drill_string();
    drill_algo();
    drill_bitset();
}
