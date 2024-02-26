// Problem Link : https://codeforces.com/problemset/problem/1877/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int s1=0,s2=0,n,x; 
        cin>>n;
        n--;
        while(n--){
            cin>>x;
            if(x<0) s1+=(-1)*x;
            else s2+=x;
        }
        cout<<s1-s2<<endl;
    }
}
