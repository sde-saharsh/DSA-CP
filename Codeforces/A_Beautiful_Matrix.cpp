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
    vvll a(5,vll(5));
    rep(i,5){
        rep(j,5){
            cin>>a[i][j];
        }
    }

    rep(i,5){
        rep(j,5){
            if(a[i][j]==1){
                cout<<abs(2-i) + abs(2-j)<<endl;
                return;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;
    while (t--) solve();
}
