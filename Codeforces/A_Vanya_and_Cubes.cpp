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
    int n;
    cin >> n;

    int height = 0;
    int used = 0;

    for (int i = 1; ; i++) {
        int cubes = i * (i + 1) / 2;  
        if (used + cubes > n)
            break;
        used += cubes;
        height++;
    }

    cout << height << endl;
    return ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;
    while (t--) solve();
}
