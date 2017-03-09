#include <iostream>
using namespace std;
int main()
{
    long long int n,first,second,next;
    while(cin>>n){
        first=0;
        second=1;
        if(n==0)
            break;
    for(int c=0;c<n+2;c++){
        if(c<=1)
            next=c;
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
