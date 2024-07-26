// problem Link : https://codeforces.com/contest/1919/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ssz(s) s.length()
#define nl endl
#define read(arr,n) for(ll i=0;i<n;i++) cin>>arr[i]
#define vll vector<ll>
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll arr(n);
        read(arr,n);
        ll p=0,i=-1,j=-1;
        for(ll k=0;k<n;k++){
            if(i==-1 && j==-1) i=k;
            else if(j==-1){
                if(arr[k]<=arr[i]) i=k;
                else j=k;
            }
            else{
                if(arr[i]>arr[j]) swap(i,j); 
                if(arr[k]<=arr[i]) i=k;
                else if(arr[k]<=arr[j]) j=k;
                else p++,i=k;
            }
        }
        cout<<p<<nl;
    }    
}
