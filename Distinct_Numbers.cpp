#include<bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define ar array 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    set<int> s;
    cin >> n;
    for(int i=0;i<n;++i){
        int x;
        cin >> x;
        s.insert(x);
    }
    
    cout << s.size();
    
    return 0;
}