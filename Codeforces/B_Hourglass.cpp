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
    long long s, k, m;
        cin >> s >> k >> m;

        long long lastFlip = (m / k) * k;
        long long ans;

        if (lastFlip >= s) {
            // hourglass was empty, restarted
            ans = max(0LL, s - (m - lastFlip));
        } else {
            // sand was still falling
            ans = max(0LL, s - m);
        }

        cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while (t--) solve();
}
