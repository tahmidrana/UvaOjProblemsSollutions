#include <iostream>
using namespace std;
int main()
{
    long long unsigned N,first,second,n,l,i,j,k;
    cin>>l;
    for(i=1;i<=l;i++){
        first=0;
        second=1;
        cin>>N;
    for(j=0;j<N+3;j++){
        if(j<=1)
            n=j;
        else{
            n=first+second;
            first=second;
            second=n;
        }
    }
    cout<<"Scenario #"<<i << ":"<< endl<< n <<endl<<endl;
    }
    return 0;
}
