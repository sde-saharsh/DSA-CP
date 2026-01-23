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
    ll a,b,n;
    cin>>a>>b>>n;

    ll op = 0;
    while(a<=n || b<=n){
        if(a<=b){
            a = a + b;
        } else{
            b = a + b;
        }
        op++;
    }

    cout<<op-1<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while (t--) solve();
}
