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

    int maxLengt = 1;
    int length = 1;

    for(int i=0;i<n-1;i++){
        if(a[i+1] > a[i]){
            length++;
            maxLengt = max(maxLengt,length);
        }
        else {
            length = 1;

            maxLengt = max(maxLengt,length);
        }
    }

    cout<<maxLengt<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;
    while (t--) solve();
}
