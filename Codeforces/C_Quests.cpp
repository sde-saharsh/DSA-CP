#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>



void solve() {
    ll n, k;
    cin >> n >> k;

    vll a(n), b(n);
    for (ll &x : a) cin >> x;
    for (ll &x : b) cin >> x;

    vll preSum(n), maxiArray(n);

    preSum[0] = a[0];
    maxiArray[0] = b[0];

    for (int i = 1; i < n; i++) {
        preSum[i] = preSum[i-1] + a[i];
        maxiArray[i] = max(maxiArray[i-1], b[i]);
    }

    ll ans = 0;
    for (int i = 1; i <= min(n, k); i++) {
        ans = max(ans, preSum[i-1] + (k - i) * maxiArray[i-1]);
    }
    cout << ans << "\n";

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}
