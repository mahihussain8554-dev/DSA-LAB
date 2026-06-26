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

void fibo(ll n , ll a , ll b)
{
   if(n == 0) return;
   cout << a << " ";
   fibo(n - 1 , b , a + b);
}

void solve()
{ 
   ll n; cin >> n;
   fibo(n , 0 , 1);
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