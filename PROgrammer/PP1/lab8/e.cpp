#include <bits/stdc++.h>  
#include <algorithm>  
using namespace std; 
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a,v.begin()+b+1);
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
}