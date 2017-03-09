#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n,s,d;
    double a,b,x,y;
    cin>>n;
    for(int c=0 ; c<n ; c++){
        cin>>s>>d;
        if(s<d)
            cout<<"impossible"<<endl;
        else{
            b=(s-d)/2.0;
            a=s-b;
            x=a-(int)a;
            y=b-(int)b;
            if(x==0 && y==0)
                cout<<a<<" "<<b<<endl;
            else
                cout<<"impossible"<<endl;
        }
    }
    return 0;
}
