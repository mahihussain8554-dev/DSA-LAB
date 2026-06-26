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
vector <vector <ll>> subsets;
void generate(vector <ll> &subset , ll i , vector <ll> &arr)
{
    if(i == arr.size()) {
        subsets.push_back(subset);
        return;
    }
    generate(subset , i + 1 , arr);
    subset.push_back(arr[i]);
    generate(subset , i + 1 , arr);
    subset.pop_back();
}
void solve()
{ 
   ll n; cin >> n;
   vector <ll> arr(n);
   for(ll i = 0 ; i < n ; i++) cin >> arr[i];
   vector <ll> empty;
   generate(empty , 0 , arr);
   for(auto i : subsets) {
    for(auto j : i) {
        cout << j << " ";
    }
    cout << nl;
   }
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