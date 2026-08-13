#include <bits/stdc++.h>
using namespace std;

double Binary_Search (int n, int p){
    int start =0,end =n,mid;
    double ans;
    while(start <=end ){
        mid=(start +end )/2;
        if(mid*mid == n){
            ans=mid;
            break;
        }
        else if(mid*mid<n){
            ans=mid;
            start =mid+1;
        }
        else{
            end =mid-1;
        }
    }

    double increment = 0.1;
    for(int i=0;i<p;i++){
        while((ans+increment)*(ans+increment)<=n){
            ans+=increment;
        }
        increment/=10;
    }
    return ans;
}

int main(){
    double p = Binary_Search(50,3);
    cout << p;
}