// Problem Link : https://codeforces.com/problemset/problem/1789/A
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a>b) return gcd(a%b,b);
    else return gcd(a,b%a);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,j,x,flag=0;
        cin>>n;
        vector<int> arr;
        for(i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                int g=gcd(arr[i],arr[j]);
                if(g<=2){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
