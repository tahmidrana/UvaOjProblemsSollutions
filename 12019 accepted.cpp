#include <bits/stdc++.h>
using namespace std;

int main()
{
    string days[14]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    int mon[15]={31,28,31,30,31,30,31,31,30,31,30,31};
    int t,d,m,r,mod;
    cin>>t;
    while(t--){
        cin>>m>>d;
        r = 0;
        for(int i=0 ; i<m-1 ; i++){
            r += mon[i];
        }
        r += d;
        //cout<<r;
        mod = r%7;
        //cout<<mod;
        if(!mod)
            cout<<"Friday" <<endl;
        else
            cout<<days[mod-1] <<endl;
    }
    return 0;
}
