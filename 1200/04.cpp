// Problem Link : https://codeforces.com/problemset/problem/1857/C
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
    int t;
    cin>>t;
    while(t--){
        ll n,i,j,cnt=0;
        cin>>n;
        ll k=(n*(n-1))/2;
        vll arr(k),ans;
        read(arr,k);
        srt(arr);
        i=j=k-1;
        ll ind=n-1;
        while(i>=0){
            while(j>=0 && arr[j]==arr[i]) j--;
            cnt=i-j+1;
            while(cnt>0) ans.pb(arr[i]),cnt-=ans.size();
            i=j;
        }
        for(i=n-1;i>=0;i--) cout<<ans[i]<<" ";
        cout<<nl;
    }    
}
