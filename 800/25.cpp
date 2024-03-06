// Problem Link : https://codeforces.com/problemset/problem/1791/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i=0,j;
        cin>>n;
        string s;
        while(i<n){
            char ch;
            cin>>ch;
            s.push_back(ch);
            i++;
        }
        i=0;
        j=n-1;
        while(i<j && s[i]!=s[j]) i++,j--;
        cout<<j-i+1<<endl;
    }
}
