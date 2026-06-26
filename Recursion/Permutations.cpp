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
vector <bool> vis;
vector <ll> permutation;
void generate(ll n) 
{
    if(permutation.size() == n) {
        for(auto i : permutation) {
            cout << i << " ";
        }
        cout << nl;
        return;
    }
    else {
       for(ll i = 0 ; i < n ; i++) {
        if(vis[i]) continue;
        vis[i] = true;
        permutation.push_back(i);
        generate(n);
        permutation.pop_back();
        vis[i] = false;
       }
    }
}
void solve()
{ 
  ll n; cin >> n;
  vis.resize(n , false);
  generate(n);
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