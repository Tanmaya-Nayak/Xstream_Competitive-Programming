/**
 * Xstream_Coding | Competitive Programming Template
 * Author  : YOUR_NAME
 * Profile : https://codeforces.com/profile/YOUR_HANDLE
 */

#pragma GCC optimize("O2,unroll-loops")
#pragma GCC target("avx2")

#include <bits/stdc++.h>
using namespace std;

// ─────────────────── TYPE ALIASES ───────────────────
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi  = vector<int>;
using vl  = vector<ll>;
using vvi = vector<vi>;

// ─────────────────── CONSTANTS ──────────────────────
const int  INF  = 1e9;
const ll   LINF = 4e18;
const int  MOD  = 1e9 + 7;
const ld   PI   = acos((ld)-1);

// ─────────────────── I/O SPEED ──────────────────────
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr)

// ─────────────────── MACROS ─────────────────────────
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define pb          push_back
#define eb          emplace_back
#define fi          first
#define se          second
#define sz(x)       (int)(x).size()
#define yes         cout << "YES\n"
#define no          cout << "NO\n"

// ─────────────────── LOOPS ──────────────────────────
#define FOR(i,a,b)  for(int i=(a); i<(b); ++i)
#define FORE(i,a,b) for(int i=(a); i<=(b); ++i)
#define ROF(i,a,b)  for(int i=(a)-1; i>=(b); --i)

// ─────────────────── MATH UTILS ─────────────────────
ll power(ll base, ll exp, ll mod = MOD) {
    ll result = 1; base %= mod;
    while (exp > 0) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

// ─────────────────── DEBUG (strips in online judge) ─
#ifdef LOCAL
    #define dbg(x)  cerr << "[" << #x << "] = " << (x) << "\n"
    #define dbgv(v) cerr << "[" << #v << "] = "; for(auto& _x:(v)) cerr << _x << " "; cerr << "\n"
#else
    #define dbg(x)
    #define dbgv(v)
#endif

// ─────────────────── SOLUTION ───────────────────────
void solve() {
    // write your solution here

}

// ─────────────────── MAIN ───────────────────────────
int main() {
    FAST_IO;
    int t = 1;
    cin >> t;          // remove if single test case
    while (t--) solve();
    return 0;
}

/*
 * CHECKLIST before submitting:
 *  [ ] Edge cases: n=0, n=1, all same, sorted, reverse sorted
 *  [ ] Overflow: use ll where n > 3e4 in products
 *  [ ] MOD applied everywhere it's needed
 *  [ ] Array bounds: index never exceeds declared size
 *  [ ] Remove debug output
 */
