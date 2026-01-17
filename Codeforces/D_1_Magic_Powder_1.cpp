#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>
#define vvll vector<vector<ll>>

#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)

ll n;
vll a(n);
vll b(n);

bool canMake(ll mid,ll k){
    for(ll i=0;i<n;i++){
        if(a[i]*mid > b[i]){
            ll req = a[i]*mid - b[i];
            k = k - req;
            if(k<0){
                return false;
            }
        }
    }
    return true;
}

void solve() {
    ll k;
    cin>>n>>k;

    a.resize(n);
    b.resize(n);

    rep(i,n) cin>>a[i];
    rep(i,n) cin>>b[i];

    ll ans = 0;
    ll low = 0;
    ll high = 1000000;

    while(low<=high){
        ll mid = (high+low)/2;
        if(canMake(mid,k)){
            ans = mid;
            low = mid + 1;
        } else{
            high = mid - 1;
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
