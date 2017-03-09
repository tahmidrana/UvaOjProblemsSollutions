#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,key[110],p[110];
    string msg;
    cin>>t;
    while(t--){
        cin>>n;
        msg = "";
        for(int i=0 ; i<n ; i++)
            cin>>key[i];
        for(int i=0 ; i<n ; i++)
            cin>>p[i];
        for(int i=0 ; i<n ; i++){
            if(key[i]==0){
                for(int c=0 ; c<p[i] ; c++)
                    msg += ' ';
            }
            else if(key[i]==1){
                if(p[i]==1)
                    msg += '.';
                if(p[i]==2)
                    msg += ',';
                if(p[i]==3)
                    msg += '?';
                if(p[i]==4)
                    msg += '\"';
            }
            else if(key[i]==2)
                msg += 96 + p[i];
            else if(key[i]==3)
                msg += 99 + p[i];
            else if(key[i]==4)
                msg += 102 + p[i];
            else if(key[i]==5)
                msg += 105 + p[i];
            else if(key[i]==6)
                msg += 108 + p[i];
            else if(key[i]==7)
                msg += 111 + p[i];
            else if(key[i]==8)
                msg += 115 + p[i];
            else if(key[i]==9)
                msg += 118 + p[i];
        }
        cout<<msg <<endl;
    }
    return 0;
}
