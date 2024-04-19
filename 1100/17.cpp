// Problem Link : https://codeforces.com/contest/1797/problem/B
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
        ll i,j,n,k;
        cin>>n>>k;
        vii grid(n,vi(n));
        for(i=0;i<n;i++){ 
            for(j=0;j<n;j++) cin>>grid[i][j];
        } 
        if(n==1){
            cout<<"YES"<<nl;
            continue;
        }
        ll x1=0,y1=0,x2=n-1,y2=n-1,cnt=0;
        while(x1<n/2){
            y1=0;
            y2=n-1;
            while(y1<n){
                if(grid[x1][y1]!=grid[x2][y2]) cnt++;
                y1++;
                y2--;
            } 
            x1++;
            x2--;
        }
        if(n%2==1){
            j=n-1;
            for(i=0;i<n/2;i++){
                if(grid[n/2][i]!=grid[n/2][j]) cnt++;
                j--;
            }
        }
        if(k>=cnt && ((n%2==1) || (n%2==0 && (k-cnt)%2==0))) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }    
}
