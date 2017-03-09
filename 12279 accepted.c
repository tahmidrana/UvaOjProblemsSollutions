/*************************
    *  12279
    *  accepted
**************************/
#include <stdio.h>
int loop(int n)
{
    int i,treat=0,nontreat=0,a,b;
    for(i=1;i<=n;i++){
            scanf("%d",&a);
        if(a==0)
            treat++;
        else
            nontreat++;
        }
        b=nontreat-treat;
        return b;
}
int main()
{
    int j,N;
    for(j=1;;j++){
    scanf("%d",&N);
    if(N==0)
        break;
    printf("Case %d: %d\n",j,loop(N));
    }
    return 0;
}
