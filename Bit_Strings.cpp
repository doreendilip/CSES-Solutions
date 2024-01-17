#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
int main(){
    ll n, ans=1, M=1e9+7;
    cin>>n;
    for(int i=1;i<=n;++i){
        ans = (ans*2) %M;
    }
    
    cout<<ans;
    
    return 0;
}
