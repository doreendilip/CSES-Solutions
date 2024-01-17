#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
int main(){
    ll n, ans=0;
    cin>>n;
    for(int i=5;i<=n;i*=5){
        ans+=n/i;
    }
    
    cout<<ans;
    
    return 0;
}