/*************************
    *   11799
    *   Horror Dash
    *   Accepted
**************************/
#include <stdio.h>
int main()
{
    int T,N,c[10000],i,j,k,s;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        for(j=0;j<N;j++){
            scanf("%d",&c[j]);
            s=c[0];
            for(k=0;k<N;k++){
            if(c[k]>s)
            s=c[k];
            }
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
