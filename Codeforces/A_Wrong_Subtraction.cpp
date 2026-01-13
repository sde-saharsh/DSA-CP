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
    ll n, k;
    cin>>n>>k;

    while(k--){
        int rem = n%10;
        if(rem!=0){
            n = n-1;
        } else{
            n=n/10;
        }
    }
    cout<<n<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;
    while (t--) solve();
}
