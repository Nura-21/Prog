#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string remVowel(string str)  
{ 
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 
                           'A', 'E', 'I', 'O', 'U'}; 
    for (int i = 0; i < str.length(); i++)  
    { 
        if (find(vowels.begin(), vowels.end(), 
                      str[i]) != vowels.end())  
        { 
            str = str.replace(i, 1, ""); 
            i -= 1; 
        } 
    } 
    return str; 
} 

int main(){
    string str;
    getline(cin,str);
    cout<<remVowel(str);
    return 0;
}