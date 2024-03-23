// Problem Link : https://codeforces.com/problemset/problem/1374/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,o=0,c=0,i;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++){
            if(s[i]==')'){
                if(o>0) o--;
                else c++; 
            }
            else o++;
        }
        cout<<o<<endl;
    }
}
