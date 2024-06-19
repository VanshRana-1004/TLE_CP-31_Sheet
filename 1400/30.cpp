// Problem Link : https://codeforces.com/problemset/problem/1110/B
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
#define pre_sum(pre,arr,n) for(i=1;i<n;i++) pre[i]=pre[i-1]+arr[i]
#define suf_sum(suf,arr,n) for(i=n-2;i>=0;i--) suf[i]=suf[i+1]+arr[i]
const double pie=3.14159265358979323846264338327950;
const ll mod=1e9+7;
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
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vll arr(n);
    read(arr,n);
    if(n<=k) cout<<n<<nl;
    else{
        vlll dis;
        for(ll i=1;i<n;i++) dis.push_back({arr[i]-arr[i-1]+1,arr[i-1],arr[i]});
        sort(dis.begin(),dis.end());
        ll ans=0;
        // as we can apply maximum k-1 single tapes, so maximum number of segments we can apply tapes will be n-k
        // as n-k segment will atleast cover n-k+1 defects ans rest left will be :
        // n-(n-k+1) = n-n+k-1 = k-1 (equal to the sungle tapes) hence proved
        map<ll,bool> covered;
        for(ll i=0;i<n-k;i++){
            ll d=dis[i][0],s=dis[i][1],e=dis[i][2];
            ans+=d;
            if(covered.count(s)) ans--;
            if(covered.count(e)) ans--;
            covered[s]=true;
            covered[e]=true;
        }
        ans+=n-covered.size();
        cout<<ans<<nl;
    }    
}
