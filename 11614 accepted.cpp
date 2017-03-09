#include <iostream>
#include <cmath>
using namespace std;
#define LL long long int

int main()
{
    double s,d;
    LL x;
    int t;
    cin>>t;
    for(int i=1 ; i<=t ; i++){
        cin>>s;
        d=sqrt(1+(8*s));
        x=(-1+d)/2;
        cout<<x <<endl;
    }
    return 0;
}
