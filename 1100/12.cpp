// Problem Link : https://codeforces.com/problemset/problem/1827/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define uni unsigned long long int
#define pb(x) push_back(x)
#define sz(arr) arr.size()
#define ssz(s) s.length()
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
ll solve(ll &num,ll e,ll &n,vll &a){
    ll mid,s=0;
    while(s<=e){
        mid=s+(e-s)/2;
        if(a[mid]<=num) s=mid+1;
        else e=mid-1;
    }
    return n-s;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,i,f=0,ans=1;
        cin>>n;
        vll a(n),b(n);
        read(a,n);
        read(b,n);
        srt(a);
        srtr(b);
        vll grt(n,0);
        grt[0]=solve(b[0],n-1,n,a);
        for(i=1;i<n;i++) grt[i]=solve(b[i],n-grt[i-1]-1,n,a);
        ll p=1;
        for(i=0;i<n;i++) p=((p%mod)*(grt[i]-i)%mod)%mod;
        cout<<p<<nl;
    }       
}
