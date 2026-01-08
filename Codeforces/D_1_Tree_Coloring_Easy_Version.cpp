#include <bits/stdc++.h>
using namespace std;

#define fastio()                 
#define ll long long
#define vi vector<int>
#define vll vector<ll>

#define rep(i, n) for (int i = 0; i < n; i++)
#define per(i, n) for (int i = n - 1; i >= 0; i--)

void solve()
{
    int n;
    cin>>n;

    vector<vector<int>> g(n+1);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> d(n+1,-1), lev(n+1,0);
    queue<int> q;

    d[1]=0;
    lev[0]=1;
    q.push(1);

    int ans=0;

    while(!q.empty()){
        int u=q.front(); q.pop();
        int c=0;
        for(int v:g[u]){
            if(d[v]==-1){
                d[v]=d[u]+1;
                lev[d[v]]++;
                c++;
                q.push(v);
            }
        }
        ans=max(ans,c+1);
    }

    for(int i=0;i<=n;i++){
        if(lev[i]==0 && i>0) break;
        ans=max(ans,lev[i]);
    }

    cout<<ans<<"\n";
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
