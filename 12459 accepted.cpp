/***************************
    *   12459
    *   bees ancestors
    *   accepted
****************************/
#include <iostream>
using namespace std;
int main()
{
    long long int n,i,j,first,second,next;
    while(cin>>n){
        first=1,second=1;
        if(n==0)
            break;
    for(i=0;i<=n;i++){
        if(i<=1)
            next=i;
        else{
            next=first+second;
            first=second;
            second=next;
        }
    }
    cout<<next <<endl;
    }
    return 0;
}
