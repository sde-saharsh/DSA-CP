#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>

#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)


void solve() {
    int n;
    cin>>n;

    vll a(n);
    rep(i,n) cin>>a[i];

    vector<pair<int,int>> vec(n);
    for(int i=0;i<n;i++){
        vec[i] = {a[i],i};
    }
    sort(vec.begin(),vec.end());

    vll preSum(n);
    preSum[0] = vec[0].first;
    for(int i=1;i<n;i++){
        preSum[i] = preSum[i-1] + vec[i].first;
    }

    vector<pair<int,int>> ansVec;
    int count = 1;

    for(int i=n-1;i>0;i--){
       if(preSum[i] >= vec[i+1].first){
            ansVec.push_back({vec[i].second,n-count});
            count++;
        } else{
            ansVec.push_back({vec[i].second,n-count});
        }
    }
    ansVec.push_back({vec[0].second,n-count});
    
    sort(ansVec.begin(),ansVec.end());
    for(int i=0;i<ansVec.size();i++){
        cout<<ansVec[i].second<< " ";
    }
    cout<<endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}
