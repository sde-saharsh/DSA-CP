#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define vi vector<int>
#define vll vector<ll>

#define rep(i, n) for (int i = 0; i < n; i++)
#define per(i, n) for (int i = n - 1; i >= 0; i--)

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll lm = k - 1, rm = n - k, res = 1;
    for (ll l = 1; l <= n; l++)
    {
        ll c = 2 * l - 1;
        if (c > m)
            break;
        ll s = m - c;
        if (l <= lm)
        {
            ll t = min(l, rm);
            t = min(t, s);
            res = max(res, l + t + 1);
        }
        if (l <= rm)
        {
            ll t = min(l, lm);
            t = min(t, s);
            res = max(res, l + t + 1);
        }
    }
    cout << res << "\n";
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
