#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int cal(string s){
    int res=0;
    for(int i=0 ; i<s.size() ; i++)
        res=(res*10+(s[i]-'0'))%17;
    return res;
}


int main()
{
    string n;
    while(cin>>n && n!="0"){
        if(cal(n)==0)
            cout<<"1" <<endl;
        else
            cout<<"0" <<endl;
    }
    return 0;
}
