#include <bits/stdc++.h>
using namespace std;
const int N=60000;
int status[N];
int prime[N];

int sieve(){
    int p=0;
    for(int i=4 ; i<N ; i+=2)
        status[i]=1;
    for(int i=3 ; i<sqrt(N) ; i+=2){
        if(status[i]==0){
            for(int j=i*i ; j<=N ; j+=i+i){
                status[j]=1;
            }
        }
    }
    for(int i=2 ; i<=N ; i++){
        if(status[i]==0){
            prime[p]=i;
            p++;
        }
    }
    return p-1;
}


int main()
{
    int n,x,p = sieve();
    while(scanf("%d",&n) && n){
        printf("%d =",n);
        if(n<0){
            printf(" -1 x");
            n = -n;
        }
        if(n==1){
            printf(" 1\n");
            continue;
        }
        //x = sqrt(n);
        for(int i=0 ; prime[i]<n && i<p ; i++){
            while(n%prime[i]==0){
                n = n/prime[i];
                if(n>1)printf(" %d x",prime[i]);
                else printf(" %d",prime[i]);
            }
        }
        if(n>1)
            printf(" %d",n);
        printf("\n");
    }
}

