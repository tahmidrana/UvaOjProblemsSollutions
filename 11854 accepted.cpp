#include <iostream>
using namespace std;
int main()
{
    long long x,y,z,a,b,c,max,T;
    cin>>T;
    for(int i=1;i<=T;i++){
            cin>>x>>y>>z;
        if(x==0 && y==0 && z==0)
            break;
        a=x*x;
        b=y*y;
        c=z*z;
        if(a>b && a>c)
            max=a;
        else if(b>a && b>c)
            max=b;
        else
            max=c;
        if(a+b==max || b+c==max || c+a==max)
            cout<<"Case " <<i <<": "<<"yes" <<endl;
        else
            cout<<"Case " <<i <<": "<<"no" <<endl;
    }
    return 0;
}
