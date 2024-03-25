// Problem Link : https://codeforces.com/problemset/problem/1506/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int i,j,k,l,m=0,p;
        for(i=0;i<s1.length();i++){
            for(j=i;j<s1.length();j++){
                for(k=0;k<s2.length();k++){
                    l=k;
                    p=j;
                    while(p<s1.length() && l<s2.length() && s1[p]==s2[l]) p++,l++;
                    m=max(m,l-k);
                }
            }
        }
        cout<<s1.length()+s2.length()-2*m<<endl;
    }
}
