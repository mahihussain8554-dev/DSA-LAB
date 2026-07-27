/* MARUF
     HUSSAIN
          MAHI */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define all(v) v.begin(), v.end()
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

void solve()
{
    string s; cin >> s;
    bool ok = true;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] != s[s.size() - i - 1]) {
            ok = false;
            break;
        }
    }
    if (ok) cout << "Palindrome" << nl;
    else cout << "Not Palindrome" << nl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t = 1;
    //cin >> t;
    while (t--)
        solve();

    return 0;
}