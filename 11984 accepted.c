/*************************************
    *   11984
    *   A change in thermal unit
    *   Accepted(1 submission)
**************************************/
#include <stdio.h>
int main()
{
    int T,C,d,i;
    float res;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d",&C,&d);
        res=C+(d/1.8);
        printf("Case %d: %0.2f\n",i,res);
    }
    return 0;
}
