/****************************
    *  GCD LCM
    *  11388
    *  Accepted
*****************************/
#include <stdio.h>
int main()
{
    int a,b,T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d %d",&a,&b);
        if(b%a==0)
            printf("%d %d\n",a,b);
        else
            printf("%d\n",-1);
    }
    return 0;
}
