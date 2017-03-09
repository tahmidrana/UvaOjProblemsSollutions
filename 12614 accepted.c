/***************************
    *   12614
    *   Earn for future
    *   accepted
****************************/
#include <stdio.h>
int main()
{
    int C[32],N,T,i,j,max;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        max=0;
        for(j=0;j<N;j++){
            scanf("%d",&C[j]);
            if(max<C[j])
                max=C[j];
        }
        printf("Case %d: %d\n",i,max);
    }
    return 0;
}
