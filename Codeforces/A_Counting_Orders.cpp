#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>

#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repe(i, a, b) for (int i = (a); i <= (b); ++i)
#define per(i, a, b) for (int i = (a); i >= (b); --i)
#define all(x) begin(x), end(x)
#define sz(x) (int)((x).size())

int findIndex(const vll &b, ll a) {
    ll n = b.size();
    ll left = 0, right = n - 1;
    ll ans = -1;   

    while (left <= right) {
        ll mid = left + (right - left) / 2;

        if (b[mid] < a) {
            ans = mid;        
            left = mid + 1;  
        } else {
            right = mid - 1;
        }
    }
    return ans +1;
}

void solve() {
    ll n,k;
    cin>>n;

    ll MOD = 1e9 + 7;

    vll a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vll b(n);
    for(int i=0;i<n;i++) cin>>b[i];
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll ans = 1;
    for(int i=0;i<n;i++){
        int count = findIndex(b,a[i]);
        if(count-i<=0){
            cout<<0<<'\n';
            return;
        }
        ans = (ans *(count-i))%MOD;
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}
