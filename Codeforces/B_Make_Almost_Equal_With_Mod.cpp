#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 1; i <= 60; i++) {
        ll k = 1LL << i; 
        set<ll> s;

        for (ll x : a) {
            s.insert(x % k);
        }

        if (s.size() == 2) {
            cout << k << '\n';
            return;
        }
    }
}

int main() {
    fastio();

    int t;
    cin >> t;
    while (t--) solve();
}
