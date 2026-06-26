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
vector <string> valid;
void generate(string &s , ll open , ll close)
{
    if(open == 0 && close == 0) {
        valid.push_back(s);
        return;
    }
    if(open > 0) {
        s.push_back('(');
        generate(s , open - 1 , close);
        s.pop_back();
    }
    if(close > 0) {
        if(close > open) {
            s.push_back(')');
            generate(s , open , close - 1);
            s.pop_back();
        }
    }
}
void solve()
{ 
   ll n; cin >> n;
   string s;
   generate(s , n , n);
   cout << valid.size() << endl;
   for(auto i : valid) {
    cout << i << nl;
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