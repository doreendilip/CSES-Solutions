#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
 
int main(){
    string s;
    cin>>s;
    int c[26] = {} ,c1=0;
    for(char d:s){
        ++c[d-'A'];
    }
    for(int i:c){
        if(i&1){
            ++c1;
        }
    }
    if(c1>1){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    string t;
    for(int i=0;i<26;++i){
        if(c[i]&1^1){
            for(int j=0;j<c[i]/2;++j){
                t+=(char)(i+'A');
            }
        }
    }
    cout<<t;
    for(int i=0;i<26;++i){
        if(c[i]&1){
            for(int j=0;j<c[i];++j){
                cout<<(char)(i+'A');
            }
        }
    }
    reverse(t.begin(),t.end());
    cout<<t;
    return 0;
}