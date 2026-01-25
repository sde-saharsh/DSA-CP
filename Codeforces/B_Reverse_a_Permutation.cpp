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
    ll n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];

    vector<int> suf(n);
    suf[n - 1] = p[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suf[i] = max(suf[i + 1], p[i]);

    int l = -1;
    for (int i = 0; i < n; i++)
    {
        if (suf[i] > p[i])
        {
            l = i;
            break;
        }
    }

    if (l != -1)
    {
        int r = n - 1;
        while (p[r] != suf[l])
            r--;
        reverse(p.begin() + l, p.begin() + r + 1);
    }

    for (int x : p)
        cout << x << " ";
    cout << endl;
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
