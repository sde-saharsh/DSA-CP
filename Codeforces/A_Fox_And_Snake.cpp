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
     ll row, col;
    cin >> row >> col;

    bool last = true;
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            if (r % 2 == 0) {
                cout << "#";
            } else {
                if (last && c == col - 1) cout << "#";
                else if (!last && c == 0) cout << "#";
                else cout << ".";
            }
        }
        if (r % 2 == 1) last = !last;
        cout << endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin >> t;
    while (t--) solve();
}
