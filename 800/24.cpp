// Problem Link : https://codeforces.com/problemset/problem/1805/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i=0,n,x,ans=0;
        cin>>n;
        while(i<n){
            cin>>x;
            ans^=x;
            i++;
        }
        if(n%2==1) cout<<ans<<endl;
        else if(ans==0) cout<<1<<endl;
        else cout<<-1<<endl;
    }
}
// if length is odd then by ^ing the ans with every number gave us result 0
// else if length is even then their will be no effect on ^ing the elements with ans as result remain unchange so, if ans==0 then return any number
// else if length is even and ans is not equal to 0 means the result will never be 0 return -1
