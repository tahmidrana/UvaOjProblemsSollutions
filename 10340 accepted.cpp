#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    long int l2,p,l1,i;
    while(cin>>s>>t){
        p = 0;
        l1 = s.size();
        l2 = t.size();
        for(i=0 ; i<l2 ; i++){
            if(s[p]==t[i]){
                p++;
            }
            if(p==l1){
                break;
            }
        }
        //cout<<p <<endl;
        if(p==l1)
            cout<<"Yes" <<endl;
        else
            cout<<"No" <<endl;

    }
    return 0;
}

