#include <iostream>
#include <bits/stdc++.h>
#include <limits>
#include <ios>
using namespace std;
int main()
{   int n;
    cin>>n;
    if(n%2==0)
        {
        if(n>=2 && n<=5)
        {
        	cout<<"Not Super";
		}
        else if(n>=6 && n<=20)
        {
        	cout<<"Super";
		}       
        else
        {
            cout<<"Not super";
        }
        
        }
        else
        {
            cout<<"Super";
        }
         return 0;
} 