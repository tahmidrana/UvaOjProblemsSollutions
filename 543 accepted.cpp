#include <iostream>
#include <cmath>
using namespace std;
int N = 1000000;
int status[1000000];
int prime[1000000];
int pos;

void sieve(){
    pos=0;
    prime[pos]=2;
    for(int i=2 ; i<=N ; i++)
        status[i]=0;
    for(int i=3 ; i<=sqrt(N) ; i+=2){
        for(int j=i*i ; j<=N ; j+=i+i){
            if(status[j]==0){
                status[j]=1;
            }
        }
    }
    for(int i=3 ; i<=N ; i+=2){
        if(status[i]==0)
        prime[pos++]=i;
    }
}
int main()
{
    int n,a,b,x;
    sieve();

    while(cin>>n){
        if(n==0)
            break;
    for(int i=0 ; prime[i]<=n ; i++){
        x=n-prime[i];
        if(status[x]==0){
            a=prime[i];
            b=x;
            break;
        }
    }
    cout<<n <<" = "<<a <<" + " <<b <<endl;
    }

    return 0;
}
