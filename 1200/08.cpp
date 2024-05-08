// Problem Link : https://codeforces.com/problemset/problem/1793/C
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
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j;
        cin>>n;
        vll arr(n);
        read(arr,n);
        if(n<=3) cout<<-1<<nl;
        else if((arr[0]!=1 && arr[0]!=n) && (arr[n-1]!=1 && arr[n-1]!=n)) cout<<1<<" "<<n<<nl;
        else{
            ll mini=1,maxi=n,s=-1,e=-1;
            i=0;
            j=n-1;
            while((j-i)+1>3){
                if((arr[i]==mini || arr[i]==maxi) || (arr[j]==mini || arr[j]==maxi)){
                    if(arr[i]==mini) i++,mini++;
                    else if(arr[i]==maxi) i++,maxi--;
                    if(arr[j]==mini) j--,mini++;    
                    else if(arr[j]==maxi) j--,maxi--;
                }
                else{
                    s=i+1;
                    e=j+1;
                    break;
                }
            }
            if(s!=-1 && e!=-1) cout<<s<<" "<<e<<nl;
            else cout<<-1<<nl;
        }
    }
}
