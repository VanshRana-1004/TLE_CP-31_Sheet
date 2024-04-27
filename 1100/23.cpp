// Problem Link : https://codeforces.com/contest/1708/problem/B
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
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,l,r,i,f=0;
        cin>>n>>l>>r;
        vector<ll> arr(n+1,-1);
        for(i=1;i<=n;i++){
            if(((l+i-1)/i)*i<=r) arr[i]=((l+i-1)/i)*i;
            else{
                f=1;
                break;
            }
        }
        if(f==1) cout<<"NO"<<nl;
        else{
            cout<<"YES"<<nl;
            for(i=1;i<=n;i++) cout<<arr[i]<<" ";
            cout<<nl;
        }
    }    
}
