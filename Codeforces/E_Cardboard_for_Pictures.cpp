#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>



void solve() {
    ll n,c;
    cin>>n>>c;

    vll s(n);
    for(int i=0;i<n;i++) cin>>s[i];

    ll left = 1;
    ll right = 1e9;
    ll ans = -1;

    while(left<=right){
        ll mid = left + (right-left)/2;
        ll sum = 0;

        for(int i=0;i<n;i++){
            sum += (s[i]+2*mid)*(s[i]+2*mid);
            if(sum>c) break;
        }

        if(sum <=c){
            ans = mid;
            left = mid +1;
        } else{
            right = mid -1;
        }
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
