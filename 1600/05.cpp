// Problem Link : https://codeforces.com/problemset/problem/1843/E
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
#define vuni vector<uni>
#define vpi vector<pi>
#define vpl vector<pl>
#define vii vector<vector<int>>
#define vlll vector<vector<ll>>
#define mn(a) *min_element(a.begin(),a.end())
#define mx(a) *max_element(a.begin(),a.end())
#define vs vector<string>
#define vss vector<vector<string>>
#define vc vector<char>
#define vcc vector<vector<char>>
#define pre_sum(pre,arr,n) for(ll i=1;i<n;i++) pre[i]=pre[i-1]+arr[i]
#define suf_sum(suf,arr,n) for(ll i=n-2;i>=0;i--) suf[i]=suf[i+1]+arr[i]
const double pie=3.14159265358979323846264338327950;
const int mod=1e9+7;
bool is_prime(ll n){
    if(n==1) return false;
    for(ll i=2;i*i<=n;i++) if(n%i==0) return false;
    return true;
}
vll divisors(ll n){
    vll d;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            d.pb(i);
            if(n/i!=i) d.pb(n/i);
        }
    }
    return d;
}
ll power(ll x,ll n){
    ll r=x,p=1;
    while(n>0){
        if(n&1) p=(p*r)%mod,n-=1;
        else r=(r*r)%mod,n/=2;
    }
    return p;
}
ll mod_sub(ll a,ll b){
    a%=mod;
    b%=mod;
    return ((a-b)%mod+mod)%mod;
}
ll gcd(ll a,ll b){
    while(a!=0 && b!=0){
        if(a>b) a%=b;
        else b%=a;
    }
    if(a==0) return b;
    return a;
}
bool possible(ll x,ll n,vll &left,vll &right,vll &query){
    vll a(n);
    for(ll i=0;i<=x;i++) a[query[i]-1]=1;
    for(ll i=1;i<n;i++) a[i]+=a[i-1];
    for(ll i=0;i<left.size();i++){
        ll l=left[i]-1,r=right[i]-1;
        ll one=a[r];
        if(l-1>=0) one-=a[l-1];
        ll zero=r-l+1-one;
        if(zero<one) return 1;
    }
    return 0;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m,q;
        cin>>n>>m;
        vll left(m),right(m);
        for(ll i=0;i<m;i++) cin>>left[i]>>right[i];
        cin>>q;
        vll query(q);
        for(ll i=0;i<q;i++) cin>>query[i];
        ll s=0,e=q-1,ans=-1,mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(possible(mid,n,left,right,query)) ans=mid,e=mid-1;
            else s=mid+1;
        }
        if(ans==-1) cout<<ans<<nl;
        else cout<<ans+1<<nl;
    }
}
