#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>



void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    unordered_map<char,int> mpp;
    int count = 0;
    vector<int> dis(n,0);

    for(int i=0;i<n;i++){
        char c = s[i];
        mpp[c]++;
        if(mpp[c]==1) count++;
        dis[i] =count;
    }

    ll ans = 0;
    for(int i=0;i<n;i++){
        ans += dis[i];
    }
    cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}
