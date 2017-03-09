#include <bits/stdc++.h>
using namespace std;

#define lp (!mod_n(s,4) && mod_n(s,100) || !mod_n(s,400))
#define hu (!mod_n(s,15))
#define bu (lp && !mod_n(s,55))
#define ord (!lp && !hu && !bu)

int mod_n(string s,int n){
    int m = 0, l = s.size();
    for(int i=0 ; i<l ; i++)
        m = (m*10+(s[i]-'0'))%n;
    return m;
}


int main()
{
    string s;
    int c = 0;
    while(cin>>s){
        if(c)
            cout<<endl;
        c = 1;
        if(lp)
            cout<<"This is leap year." <<endl;
        if(hu)
            cout<<"This is huluculu festival year." <<endl;
        if(bu)
            cout<<"This is bulukulu festival year." <<endl;
        if(ord)
            cout<<"This is an ordinary year." <<endl;
    }
    return 0;
}
