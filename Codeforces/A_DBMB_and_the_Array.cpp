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
    ll n,s,k;
    cin>>n>>s>>k;

    vll a(n);
    rep(i,n) cin>>a[i];

    int sum = 0;
    rep(i,n){
        sum += a[i];
    }

    if((s-sum)%k==0 && s-sum>=0){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while (t--) solve();
}
