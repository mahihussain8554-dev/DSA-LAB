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
   string s; getline(cin , s);
   string sub; cin >> sub;
   ll count = 0;
   ll n = sub.size();
   bool ok = false;
   for(ll i = 0 ; i < s.size() ; i++) {
    if(sub[0] == s[i]) {
        string test = "";
        test.push_back(sub[0]);
        ll limit = 1;
        for(ll j = i + 1 ; j < s.size() ; j++) {
          if(limit == n) break;
          test.push_back(s[j]);
          limit++;
        }
        if(test == sub) {
            count++;
            ok = true;
            cout << "Substring Found at Index " << i << " " << "To" << " " << i + n - 1 << nl;  
        }
    }
   }
   if(!ok) cout << "Substring Not Found In The Main String." << nl;
   else cout << "Substring Appears Total " << count << " " << "Times." << nl;
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