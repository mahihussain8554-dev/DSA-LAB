/* MARUF
     HUSSAIN
          MAHI */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"
#define all(v) v.begin(),v.end()
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
 
void solve()
{ 
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll x; cin >> x;
    ll l = 0, r = n - 1;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        if(a[mid] == x) return void(cout << "Found at index " << mid << nl);
        else if(a[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    cout << "Not Found!!" << nl; 
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  cout.tie(NULL);
 
    ll t = 1;
    //cin>>t;
    while(t--)  solve();         
    
    return 0;
}