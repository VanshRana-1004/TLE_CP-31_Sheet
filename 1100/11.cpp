// Problem Link : https://codeforces.com/problemset/problem/1832/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define uni unsigned long long int
#define pb(x) push_back(x)
#define sz(arr) arr.size()
#define nl endl
#define read(arr,n) for(ll i=0;i<n;i++) cin>>arr[i]
#define srt(arr) sort(arr.begin(),arr.end())
#define srtr(arr) sort(arr.rbegin(),arr.rend())
#define rev(arr) reverse(arr.begin(),arr.end())
#define pi pair<int,int>
#define pl pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define vlll vector<vector<ll>>
#define vs vector<string>
#define vss vector<vector<string>>
#define vc vector<char>
#define vcc vector<vector<char>>
#define pre_sum(pre,arr,n) for(i=1;i<n;i++) pre[i]=pre[i-1]+arr[i]
#define suf_sum(suf,arr,n) for(i=n-2;i>=0;i--) suf[i]=suf[i+1]+arr[i]
const double pie=3.14159265358979323846264338327950;
const ll mod=1e9+7;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k,i,ans=0;
        cin>>n>>k;
        vll arr(n);
        read(arr,n);
        srt(arr);
        vll pre=arr,suf=arr;
        pre_sum(pre,arr,n);
        suf_sum(suf,arr,n);
        for(i=0;i<=k;i++){
            ll i1=2*i-1,i2=n-(k-i),sum=suf[0];
            if(i1>0) sum-=pre[i1];
            if(i2<n) sum-=suf[i2];
            ans=max(ans,sum);
        }
        cout<<ans<<nl;
    }
}
