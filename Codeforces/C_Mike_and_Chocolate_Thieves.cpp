#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>
#define vvll vector<vector<ll>>

#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)

ll m;


ll findWays(ll n){
    ll count = 0;
    for(ll k = 2;; k++){
        __int128 cube = (__int128)k * k * k;
        if(cube > n) break;

        count += n / cube;

        if(count > m) return count; 
    }
    return count;
}

void solve() {
    cin>>m;

    ll left = 1;
    ll right = 1e18;
    ll ans = -1;

    while(left<=right){
        ll mid = left + (right-left)/2;
        ll ways = findWays(mid);

        if(ways==m){
            ans = mid;
            right = mid - 1;
        } else if(ways > m){
            right = mid -1;
        } else{
            left = mid +1;
        }
    }

    cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;
    while (t--) solve();
}
