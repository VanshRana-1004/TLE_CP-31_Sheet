// Problem Link : https://codeforces.com/problemset/problem/1471/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long sum=0,mini=0,n,x,a;
        cin>>n>>x;
        while(n--){
            cin>>a;
            sum+=a;
            if(a%x==0) mini+=a/x;
            else mini+=a/x+1;
        }
        a=sum/x;
        if(sum%x!=0) a++;
        cout<<min(mini,a)<<" "<<max(mini,a)<<endl;
    }
}
