#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>
#define vvll vector<vector<ll>>

#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)


void solve() {
    ll n;
    cin>>n;

    int cnt = 0;

    while (n > 0) {
        int rem = n % 10;
        if (rem == 4 || rem == 7)
            cnt++;
        n /= 10;
    }

    if (cnt == 0) {
        cout << "NO\n";
        return ;
    }
    while (cnt > 0) {
        int rem = cnt % 10;
        if (rem != 4 && rem != 7) {
            cout << "NO\n";
            return ;
        }
        cnt /= 10;
    }

    cout << "YES\n";
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;
    while (t--) solve();
}
