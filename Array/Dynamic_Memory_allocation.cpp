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
  ll *arr = new ll[n];
  for(ll i = 0 ; i < n ; i++) cin >> arr[i];
  ll sum = 0;
  for(ll i = 0 ; i < n ; i++) sum += arr[i];
  cout << sum << nl; 
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