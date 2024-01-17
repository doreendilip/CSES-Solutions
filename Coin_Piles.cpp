#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
int main(){
    int t;
    cin>>t;
    ll a,b;
    while(t--){
        cin >> a >> b;
        if((a+b)%3==0 && 2*a>=b && 2*b>=a){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}
