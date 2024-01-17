#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
int main(){
    string s;
    cin>>s;
    
    int ans = 1, ct = 0;
    char d = 'A';
    for(char c: s){
        if(c == d){
            ct++;
            ans = max(ans,ct);
        }
        else{
            d = c;
            ct=1;
        }
    }
    
    cout<<ans;
    
    return 0;
}
