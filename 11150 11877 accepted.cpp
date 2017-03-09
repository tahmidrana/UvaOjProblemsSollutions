/****************************
    *   11150
    *   11877
    *   accepted
*****************************/
#include <iostream>
using namespace std;
int main()
{
    int n,res,mod;
    while(cin>>n){
        if(n==0)
            break;
        int x=n;
            res=0;
        while(n>=3){
            n=n-3;
            res++;
            n++;
        }
    if(n==2){
        res++;
        cout<<res+x <<endl;
    }
    else
        cout<<res+x <<endl;
    }
    return 0;
}
