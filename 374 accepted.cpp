#include <iostream>
using namespace std;

int bigMod(int b,int p,int m){
    int x;
    if(p==0)
        return 1;
    if(p==1)
        return b%m;
    if(p%2==0){
        x = bigMod(b,p/2,m)%m;
        return (x*x)%m;
    }
    else{
        x =((bigMod(b,p-1,m)%m)*(bigMod(b,1,m)%m));
        return (x%m);
    }
}
int main()
{
    int B,P,M;
    while(cin>>B>>P>>M){
    cout<<bigMod(B,P,M) <<endl;
    }
    return 0;
}
