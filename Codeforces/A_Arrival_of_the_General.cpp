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

    vll a(n);
    rep(i,n) cin>>a[i];

    int maxi = 0;
    int mini = 0;

    rep(i,n){
        if(a[i]>a[maxi]){
            maxi = i;
        }
        if(a[i]<=a[mini]){
            mini = i;
        }
    }

    if(maxi > mini){
        cout<<(maxi) + (n-1-mini) -1 <<endl;
    } else{
        cout<<(maxi) + (n-1-mini) <<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;
    while (t--) solve();
}
