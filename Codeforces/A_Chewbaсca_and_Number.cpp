#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>

#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)

void reverse(vector<ll>& a){
    int n = a.size();
    for(int i=0;i<n/2;i++){
        ll temp = a[i];
         a[i] = a[n-i-1];
         a[n-i-1] = temp;
    }
}

void solve() {
    ll x;
    cin>>x;

    vll a;
    ll temp = x;
    while(temp>0){
        a.push_back(temp%10);
        temp = temp/10;
    }

    reverse(a);
    int n = a.size();
    for(int i=0;i<n;i++){
        if(i==0 && a[i]==9){
            continue;
        } else if(a[i]>=5){
            a[i] = 9 - a[i];
        }
    }


    rep(i,n){
        cout<<a[i];
    }
    cout<<endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;
    while (t--) solve();
}
