#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> row1(n), row2(n);
        for (int i = 0; i < n; i++) cin >> row1[i];
        for (int i = 0; i < n; i++) cin >> row2[i];

        int lo = min(row1[0], row2[0]);
        int hi = max(row1[0], row2[0]);

        bool ok = true;

        for (int i = 1; i < n; i++) {
            int a = row1[i];
            int b = row2[i];

            int mn = min(a, b);
            int mx = max(a, b);

            int new_lo = INT_MAX;
            int new_hi = INT_MIN;

            if (lo <= mn) {
                new_lo = min(new_lo, mn);
                new_hi = max(new_hi, mx);
            } else if (lo <= mx) {
                new_lo = min(new_lo, mx);
                new_hi = max(new_hi, mx);
            }

            if (hi <= mn) {
                new_lo = min(new_lo, mn);
                new_hi = max(new_hi, mx);
            } else if (hi <= mx) {
                new_lo = min(new_lo, mx);
                new_hi = max(new_hi, mx);
            }

            if (new_lo == INT_MAX) {
                ok = false;
                break;
            }

            lo = new_lo;
            hi = new_hi;
        }

        cout << (ok ? "Yes" : "No") << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
