#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
ll x,y,ans;
 
void solve(){
    cin >> x >> y;
    ll z = max(x,y);
    ll z2 = (z-1)*(z-1);
    if(z%2==0){
        if(y==z){
            ans = z2+x;
        }
        else{
            ans = z2+2*z-y;
        }
    }
    else{
        if(x==z){
            ans = z2+y;
        }
        else{
            ans = z2+2*z-x;
        }
    }
    
    cout<<ans<<"\n";
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
