/*****************************
    *   11875
    *   Brick Game
    *   Accepted
******************************/
#include <stdio.h>
int main()
{
    int a[11],i,j,N,T;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        for(j=0;j<N;j++){
        scanf("%d",&a[j]);
        }
    printf("Case %d: %d\n",i,a[j/2]);
    }
    return 0;
}
