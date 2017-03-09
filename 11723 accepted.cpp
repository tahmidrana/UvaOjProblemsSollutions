#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float r,n;
    float res;
    int i=0;
    while(cin>>r>>n){
        i++;
        if(r==0 && n==0)
            break;
        r=r-n;
        res=r/n;
        if(res>26)
            cout<<"Case " <<i <<": impossible" <<endl;
        else if(res>0 && res<=26)
            cout<<"Case " <<i <<": "<<ceil(res) <<endl;
        else
            cout<<"Case " <<i <<": "<<0 <<endl;
    }
    return 0;
}
