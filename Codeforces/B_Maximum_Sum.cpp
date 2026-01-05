#include <bits/stdc++.h>
using namespace std;

#define fastio()                
#define ll long long
#define vi vector<int>
#define vll vector<ll>

void solve()
{
    int n, k;
    cin >> n >> k;

    vll a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(),a.end());

    vll preSum(n);
    preSum[0] = a[0];
    for(int i=1;i<n;i++){
        preSum[i] = preSum[i-1] + a[i];
    }

    ll ans = 0;
    for(ll first =0;first<=k;first++){
        ll second = k - first;
        ll left = first * 2;
        ll right = n-second -1 ;
        ll sum = preSum[right] - (left==0?0:preSum[left-1]);
        ans = max(ans,sum);
    }
    
    cout << ans << endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}
