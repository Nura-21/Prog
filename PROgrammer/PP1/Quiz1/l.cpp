#include <iostream>
using namespace std;
int main() {
    int s,h,m;
    cin>>s;
    m=s/60;
    s=s%60;
    h=m/60;
    m=m%60;
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}