#include <iostream>
#include <cmath>
#define N 10000000
using namespace std;

int status[N];
int prime[N];

void sieve(){
    int p=0;
    status[2]=0;
    status[1]=1;
    status[0]=1;
    for(int i=3 ; i<=N ; i+=2)
        status[i]=0;
    for(int i=4 ; i<=N ; i+=2)
        status[i]=1;
    for(int i=3 ; i<=sqrt(N) ; i+=2){
        if(status[i]==0){
            for(int j=i*i ; j<=N ; j+=i+i)
                status[j]=1;
        }
    }
    for(int i=0 ; i<=N ; i++){
        if(status[i]==0){
            prime[p]=i;
            p++;
        }
    }
}

int main()
{
    int n,a,b;
    sieve();
    while(cin>>n && n!=0){
        for(int i=0 ; prime[i]<=n ; i++){
            int x=n-prime[i];
            if(status[x]==0){
                a=prime[i];
                b=x;
                break;
            }
            else
                a=0;
        }
        if(a==0 || n==1)
            cout<<n <<":"<<endl<<"NO WAY!" <<endl;
        else
            cout<<n <<":"<<endl <<a <<"+" <<b <<endl;
    }
    return 0;
}
