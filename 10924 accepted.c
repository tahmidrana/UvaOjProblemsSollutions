/***************************
    *   10924
    *   Accepted
    *   prime word
****************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
int is_prime(long long n)
{
    int i;
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3;i<=sqrt(n);i+=2){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    long long i,n;
    char L[20];
    while(scanf("%s",L)!=EOF){
            n=0;
    for(i=0;i<strlen(L);i++){
        if(L[i]>='a' && L[i]<='z')
            L[i]=L[i]-'a'+1;
        if(L[i]>='A' && L[i]<='Z')
            L[i]=L[i]-'A'+27;
        n=n+L[i];
    }
    if(1==is_prime(n))
        printf("It is a prime word.\n");
    else
        printf("It is not a prime word.\n");
    }
    return 0;
}
