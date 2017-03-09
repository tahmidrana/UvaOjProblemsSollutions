#include <iostream>
#define N 50
using namespace std;
long long int ar[100];
long long int ar1[100];

void Fib(){
    ar[0]=1;
    ar[1]=2;

    ar1[0]=0;
    ar1[1]=1;

    for(int i=2 ; i<=N ; i++){
        ar[i]=ar[i-1]+ar[i-2]+1;
        ar1[i]=ar1[i-1]+ar1[i-2]+1;
    }
}

int main()
{
    int n;
    Fib();
    while(cin>>n){
        if(n==-1)
            break;
        cout<<ar1[n] <<" "<<ar[n]<<endl;
    }
    return 0;
}
