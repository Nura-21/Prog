#include <iostream>
#include <string>
using namespace std; 
int main(){
    string s;
    cin>>s;
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i = 0; i<n; ++i){
        for(int j=0;j<m;++j){
            a[i][j]=='X';}}
    for(int i = 0; i < n; ++i){
        for(int j=0;j<m;++j){
            cout<<a[i][j];}
            cout<<endl;} 
            return 0;
}