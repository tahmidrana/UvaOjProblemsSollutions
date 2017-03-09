#include <iostream>
using namespace std;
int main()
{
    int t,e,f,c,b,res,m;
    cin>>t;
    while(t--){
        cin>>e>>f>>c;
        b=e+f;
        res=0;
        while(b>=c){
            m=b%c;
            b=b/c;
            res+=b;
            b+=m;
        }
        cout<<res <<endl;
    }
    return 0;
}
