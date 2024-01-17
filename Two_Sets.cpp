#include<bits/stdc++.h>
using namespace std;

#define ll long long 
 
int main(){
    ll n;
    cin>>n;
    
    if((n*(n+1)/2) % 2 == 0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO";
        return 0;
    }
    
    vector<int> v1,v2;
    if(n%2 == 0){
        for(int i=0;i<n/2;++i){
            if(i%2==0){
                v1.push_back(i+1);
                v1.push_back(n-i);
            }
            else{
                v2.push_back(i+1);
                v2.push_back(n-i);
            }
        }
    }
    else{
        for(int i=0;i<(n-1)/2;++i){
            if(i%2==0){
                v1.push_back(i+1);
                v1.push_back((n-1)-i);
            }
            else{
                v2.push_back(i+1);
                v2.push_back((n-1)-i);
            }
        }
        if(v1.size()>v2.size()){
            v2.push_back(n);
        }
        else{
            v1.push_back(n);
        }
    }
    
    cout<<v1.size()<<"\n";
    for(int i:v1){
        cout<<i<<" ";
    }
    cout<<"\n"<<v2.size()<<"\n";
    for(int i:v2){
        cout<<i<<" ";
    }
    
    return 0;
}
