#include <bits/stdc++.h>
using namespace std;

void Check(int n){
    int ar[11],x,mod;
    for(int i=0 ; i<11 ; i++)
        ar[i]=0;
    for(int i=0 ; i<=n ; i++){
        x=i;
        while(x!=0){
            mod=x%10;
            x/=10;
            ar[mod]++;
        }
    }
    for(int i=0 ; i<10 ; i++){
        cout<<ar[i];
        if(i<9)
            cout<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        cin>>n;
        Check(n);
    }
    return 0;
}
