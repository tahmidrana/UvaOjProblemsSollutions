/***********************
    *   Accepted
************************/

#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
    if(n>13)
        printf("Overflow!\n");
    if(n==9)
        printf("362880\n");
    if(n==10)
        printf("3628800\n");
    if(n==11)
        printf("39916800\n");
    if(n==12)
        printf("479001600\n");
    if(n==13)
        printf("6227020800\n");
    if(n==8)
        printf("40320\n");
    if(n>=0 && n<=7)
        printf("Underflow!\n");
    if(n<0){
        n=-n;
        if(n%2==0)
            printf("Underflow!\n");
        else
            printf("Overflow!\n");
    }
    }
    return 0;
}
