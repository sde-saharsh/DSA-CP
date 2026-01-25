#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vvll vector<vector<ll>>

#define rep(i, n) for (int i = 0; i < n; i++)
#define per(i, n) for (int i = n - 1; i >= 0; i--)

void solve()
{
    ll n, q;
    cin >> n >> q;

    vll a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    vvll queries(q, vll(2));
    rep(i, q)
    {
        cin >> queries[i][0] >> queries[i][1];
    }


    vll maxArray(n);
    maxArray[n-1] = b[n-1];

    for(int i = n-2; i >= 0; i--){
        maxArray[i] = max(b[i], maxArray[i+1]);
    }

    vll preSum(n);
    preSum[0] = maxArray[0];
    for(int i = 1; i < n; i++){
        preSum[i] = preSum[i-1] + maxArray[i];
    }

    for(int i = 0; i < q; i++){
        ll left = queries[i][0] - 1;
        ll right = queries[i][1] - 1;

        if(left == 0)
            cout << preSum[right]<<" " ;
        else
            cout << preSum[right] - preSum[left-1] <<" ";
    }
    cout<<endl;


}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
}
