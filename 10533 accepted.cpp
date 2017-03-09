#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#define N 1000000
using namespace std;

int status[N];
int dig[N];
int result[N];

void sieve(){

    status[2]=1;
    for(int i=3 ; i<=N ; i+=2)
        status[i]=1;
    for(int i=4 ; i<=N ; i+=2)
        status[i]=0;
    for(int i=3 ; i<sqrt(N) ; i+=2){
        if(status[i]==1){
            for(int j=i*i ; j<=N ; j+=i+i)
                status[j]=0;
        }
    }
}


void DigitCheck(){
    int sum,mod;
    int a,b,n,res;
    for(int i=0 ; i<1000000 ; i++){
        sum=0;
        int x=i;
        while(x!=0){
            mod=x%10;
            x/=10;
            sum+=mod;
        }
        if(status[sum]==1 && status[i]==1)
            dig[i]=1;
    }
    int tot=0;
    for(int j=0 ; j<1000000 ; j++){
        tot+=dig[j];
        result[j]=tot;
    }
    scanf("%d",&n);
    for(int c=0 ; c<n ; c++){
        scanf("%d %d",&a,&b);
        res=result[b]-result[a-1];
        printf("%d\n",res);
    }
}

int main()
{
    sieve();
    DigitCheck();
    return 0;
}
