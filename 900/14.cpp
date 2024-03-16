// Problem Link : https://codeforces.com/problemset/problem/1679/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n,mini=2e18,maxi=0;;
        cin>>n;
        if(n%2!=0 || n<4) cout<<-1<<endl;
        else{
            if(n%6==0){
                mini=n/6;  
                if(n/6==1) maxi=1;
            } 
            if(n%4==0){
                maxi=n/4;
                if(n/4==1) mini=1;
            } 
            if(n%6==4 || n%6==2) mini=min(mini,n/6+1);
            if(n%4==2) maxi=max(maxi,n/4);
            cout<<mini<<" "<<maxi<<endl;
        }
    }   
}
