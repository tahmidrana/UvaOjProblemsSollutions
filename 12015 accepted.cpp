#include <bits/stdc++.h>
using namespace std;
#define INF -2147483646

int main()
{
    string s[12],a;
    int t,v[12],max,p;
    cin>>t;
    for(int j=1 ; j<=t ; j++){
        max = INF;
        for(int i=0 ; i<10 ; i++){
            cin>>s[i];
            cin>>v[i];
            if(v[i]>max){
                max = v[i];
                p = i;
            }
        }
        cout<<"Case #" <<j <<":" <<endl;
        for(int i=0 ; i<10 ; i++){
            if(v[i]==max)
                cout<<s[i]<<endl;
            //cout<<v;
        }
    }
    return 0;
}
