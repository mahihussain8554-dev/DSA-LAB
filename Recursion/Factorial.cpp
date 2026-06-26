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
 
ll fact(ll n)
{
   if(n == 0 || n == 1) return 1;
   return n * fact(n - 1);
}
void solve()
{ 
   ll n; cin >> n;
   cout << fact(n) << nl;
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