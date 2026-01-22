#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>
#define vvll vector<vector<ll>>

#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)

ll n,m;
vector<int> a;

bool canMake(ll x){
     int prev = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] + x < m) {
                if (a[i] + x < prev) return false;
                prev = max(prev, a[i]);
            } else {
                int wrap = (a[i] + x) % m;
                if (prev > wrap)
                    prev = max(prev, a[i]);
            }
        }
        return true;
}

void solve() {
    cin>>n>>m;
    a.resize(n);
    rep(i,n) cin>>a[i];

    ll left = 0;
    ll right = m-1;
    ll ans = -1;

    while(left<=right){
        ll mid = left + (right-left)/2;
        if(canMake(mid)){
            ans = mid;
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
