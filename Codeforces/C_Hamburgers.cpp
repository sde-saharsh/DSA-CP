#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int> 
#define vll vector<ll>
#define vvll vector<vector<ll>>

#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)

ll nb, ns, nc;
ll pb, ps, pc;
ll r;
ll breadCount, sausageCount, cheeseCount;

bool canMake(ll mid) {
    __int128 needB = max((__int128)0, (__int128)mid * breadCount - nb);
    __int128 needS = max((__int128)0, (__int128)mid * sausageCount - ns);
    __int128 needC = max((__int128)0, (__int128)mid * cheeseCount - nc);

    __int128 cost = needB * pb + needS * ps + needC * pc;
    return cost <= r;
}



void solve() {
    string s;
    cin>>s;
    
    
    // ll nb,ns,nc;
    cin>>nb>>ns>>nc;
    // ll pb,ps,pc;
    cin>>pb>>ps>>pc;
    // ll r;
    cin>>r;
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='B') breadCount++;
        else if(s[i]=='S') sausageCount++;
        else cheeseCount++;
    }

    ll left = 0;
    ll right = r + max({nb, ns, nc});
    ll ans = 0;

    while (left <= right) {
        ll mid = left + (right - left) / 2;
        if (canMake(mid)) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;
    while (t--) solve();
}
