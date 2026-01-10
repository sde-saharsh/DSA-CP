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
    
    ll ans = 0;

    while(n--){
        string s;
        cin>>s;
        if(s[0]=='T') ans += 4;
        else if(s[0]=='C') ans += 6;
        else if(s[0]=='O') ans += 8;
        else if(s[0]=='D') ans += 12;
        else ans += 20;
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
