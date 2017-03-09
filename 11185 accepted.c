#include <stdio.h>
int main()
{
    long long N,i,count;
    char mod[100];
    while(scanf("%lld",&N)){
            i=0;
            count=0;
        if(N<0)
            break;
        if(N==0)
            printf("%d",0);
        while(N!=0){
            mod[i]=N%3;
            N=N/3;
            i++;
            count++;
        }
    for(i=count-1;i>=0;i--)
        printf("%d",mod[i]);
        printf("\n");
    }
    return 0;
}
