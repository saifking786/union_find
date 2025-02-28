// Header Files and namespaces
#include <bits/stdc++.h>
using namespace std;

// Code Shorteners
typedef long long ll; 
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define len(s) (ll)s.size()
#define print(x) cout << x << '\n'
#define REP(i, a, b) for (ll i = a; i <= b; i++)
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll mod = 1000000007;

// Union-Find Data Structure (1-based indexing: pass value as n+1)
struct UnionFind {
    ll n;
    vector<ll> rank;
    vector<ll> parent;
    
    UnionFind(ll n) {
        rank.resize(n, 0);
        parent.resize(n);
        for (ll i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    
    ll get(ll a) {
        return parent[a] = (parent[a] == a ? a : get(parent[a]));
    }
    
    void merge(ll a, ll b) {
        a = get(a);
        b = get(b);
        if (a == b) {
            return;
        }
        if (rank[a] == rank[b]) {
            rank[a]++;
        }
        if (rank[a] > rank[b]) {
            parent[b] = a;
        } else {
            parent[a] = b;
        }
    }
};

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        // Add problem logic here
    }
    return 0;
}
