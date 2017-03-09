/*************************
    *  1230
    *  Modex
    *  AC
**************************/
#include <iostream>
using namespace std;

int BigMod(int x,int y,int n){
    if(y==0)
        return 1;
    if(y==1)
        return x;
    if(y%2==0){
        int a=BigMod(x,y/2,n)%n;
        return (a*a)%n;
    }
    else{
        int a=(BigMod(x,y-1,n)%n)*(BigMod(x,1,n)%n);
        return a%n;
    }
}

int main()
{
    int x,y,n,c;
    cin>>c;
    for(int i=1 ; i<=c ; i++){
        cin>>x>>y>>n;
        if(x==0)
            break;
        cout<<BigMod(x,y,n) <<endl;
    }
    return 0;
}
