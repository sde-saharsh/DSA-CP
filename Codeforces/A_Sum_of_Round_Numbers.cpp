#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>
#define vvll vector<vector<ll>>

#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)

void reverse(vector<long long>& a){
    int n = a.size();
    for(int i=0;i<n/2;i++){
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

void solve() {
    ll n;
    cin>>n;

    vll a;
    ll x = n;
    while(x>0){
        a.push_back(x%10);
        x = x/10;
    }
    reverse(a);

    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while (t--) solve();
}
