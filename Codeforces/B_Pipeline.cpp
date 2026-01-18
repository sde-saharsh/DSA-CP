#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>
#define vvll vector<vector<ll>>

#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)


bool canMake(ll m, ll n, ll k) {
    __int128 gain = (__int128)m * (2*k - m - 1) / 2;
    return gain >= (n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;


    ll maxPipes = 1 + k * (k - 1) / 2;
    if (n > maxPipes) {
        cout << -1 << "\n";
        return 0;
    }

    ll left = 0, right = k - 1;
    ll ans = -1;

    while (left <= right) {
        ll mid = left + (right - left) / 2;

        if (canMake(mid, n, k)) {
            ans = mid;         
            right = mid - 1;
        } else {
            left = mid + 1;    
        }
    }

    cout << ans << "\n";
    return 0;
}