#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>
#define vvll vector<vector<ll>>

#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)

ll n,h;
vll vec;

bool canKill(ll k){
    ll sum = k;
    rep(i,n-1){
        sum += min(k,vec[i]);
    }

    if(sum>=h) return true;
    return false;
}

void solve() {
    cin>>n>>h;

    vll a(n);
    rep(i,n) cin>>a[i];

    for(int i=1;i<n;i++){
        vec.push_back(a[i]-a[i-1]);
    }

    ll high = 1e18;

    ll low = 0;
    ll ans = -1;

    while(low<=high){
        ll k = high - (high-low)/2;
        if(canKill(k)){
            ans= k;
            high = k -1;
        } else{
            low = k + 1;
        }
    }

    cout<<ans<<endl;
    vec.clear();

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while (t--) solve();
}
