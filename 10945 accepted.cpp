#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

string comp(string s){
    string s1="";
    int l=s.size();
    for(int i=l-1 ; i>=0 ; i--){
        s1+=s[i];
    }
    return s1;
}
int main()
{
    int t,p,l;
    string s,s1,s2;
    while(getline(cin,s1)){
        if(s1=="DONE")
            return 0;
        int l=s1.size();
        for(int i=0 ; i<l ; i++){
            if((s1[i]>='A' && s1[i]<='Z')|| (s1[i]>='a' && s1[i]<='z'))
                s+=tolower(s1[i]);
        }

        if(comp(s)!=s)
            cout<<"Uh oh.." <<endl;
        else
            cout<<"You won't be eaten!" <<endl;
        s="";
    }
}
